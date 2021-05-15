#include "r_shader.hh"

#include <fstream>
#include <iostream>
#include <sstream>

namespace Shadowheart {
namespace Renderer {

Shader::Shader(const std::string& vertexShaderPath, const std::string& fragmentShaderPath) {
  std::string vertCode, fragCode;
  std::ifstream vertShaderFile, fragShaderFile;

  #ifdef DEBUG
  // Make sure streams can throw exceptions
  vertShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
  fragShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
  #endif

  #ifdef DEBUG
  try {
  #endif
    // Open files and create a stringstream
    vertShaderFile.open(vertexShaderPath);
    fragShaderFile.open(fragmentShaderPath);
    std::stringstream vertShaderStream, fragShaderStream;

    // Read file-data into the stream
    vertShaderStream << vertShaderFile.rdbuf();
    fragShaderStream << fragShaderFile.rdbuf();

    // Close file-handlers
    vertShaderFile.close();
    fragShaderFile.close();

    // Dump streams into strings
    vertCode = vertShaderStream.str();
    fragCode = fragShaderStream.str();

  #ifdef DEBUG
  } catch (std::ifstream::failure& exception) {
    std::cout << "ERROR::RENDERER::SHADER::FILE_NOT_SUCCESSFULLY_READ" << std::endl;
  }
  #endif

  // Create the actual code string for compilation and linking
  const char* vertexShaderCode = vertCode.c_str();
  const char* fragmentShaderCode = fragCode.c_str();

  #ifdef DEBUG
  // Used to check various states during compilation and linking
  int success;
  char infoLog[512];
  #endif

  // Store shader-ids
  unsigned int vertShader, fragShader;
  vertShader = glCreateShader(GL_VERTEX_SHADER);
  fragShader = glCreateShader(GL_FRAGMENT_SHADER);

  glShaderSource(vertShader, 1, &vertexShaderCode, nullptr);
  glShaderSource(fragShader, 1, &fragmentShaderCode, nullptr);

  // Compile the shaders and check for compilation errors
  glCompileShader(vertShader);
  #ifdef DEBUG
  glGetShaderiv(vertShader, GL_COMPILE_STATUS, &success);
  if (!success) {
    glGetShaderInfoLog(vertShader, 512, nullptr, infoLog);
    std::cout << "ERROR::RENDERER::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
  }
  #endif

  glCompileShader(fragShader);
  #ifdef DEBUG
  glGetShaderiv(fragShader, GL_COMPILE_STATUS, &success);
  if (!success) {
    glGetShaderInfoLog(fragShader, 512, nullptr, infoLog);
    std::cout << "ERROR::RENDERER::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
  }
  #endif

  // Create the shader-program and check for linking errors
  _id = glCreateProgram();
  glAttachShader(_id, vertShader);
  glAttachShader(_id, fragShader);
  glLinkProgram(_id);

  #ifdef DEBUG
  glGetProgramiv(_id, GL_LINK_STATUS, &success);
  if (!success) {
    glGetProgramInfoLog(_id, 512, nullptr, infoLog);
    std::cout << "ERROR::RENDERER::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
  }
  #endif

  // Delete / Free the shaders
  glDeleteShader(vertShader);
  glDeleteShader(fragShader);
}

Shader::~Shader() { glDeleteProgram(_id); }

void Shader::use() { glUseProgram(_id); }

void Shader::setUniformf(std::string name_of_uniform, Math::vec1 data) {
  glUniform1f(glGetUniformLocation(_id, name_of_uniform.c_str()), data);
}

void Shader::setUniform2f(std::string name_of_uniform, Math::vec2 data) {
  glUniform2f(glGetUniformLocation(_id, name_of_uniform.c_str()), data[0], data[1]);
}

void Shader::setUniform3f(std::string name_of_uniform, Math::vec3 data) {
  glUniform3f(glGetUniformLocation(_id, name_of_uniform.c_str()), data[0], data[1], data[2]);
}

void Shader::setUniform4f(std::string name_of_uniform, Math::vec4 data) {
  glUniform4f(glGetUniformLocation(_id, name_of_uniform.c_str()), data[0], data[1], data[2], data[3]);
}

void Shader::setUniformi(std::string name_of_uniform, Math::ivec1 data) {
  glUniform1i(glGetUniformLocation(_id, name_of_uniform.c_str()), data);
}

void Shader::setUniform2i(std::string name_of_uniform, Math::ivec2 data) {
  glUniform2i(glGetUniformLocation(_id, name_of_uniform.c_str()), data[0], data[1]);
}

void Shader::setUniform3i(std::string name_of_uniform, Math::ivec3 data) {
  glUniform3i(glGetUniformLocation(_id, name_of_uniform.c_str()), data[0], data[1], data[2]);
}

void Shader::setUniform4i(std::string name_of_uniform, Math::ivec4 data) {
  glUniform4i(glGetUniformLocation(_id, name_of_uniform.c_str()), data[0], data[1], data[2], data[3]);
}
}  // Namespace Renderer
}  // Namespace Shadowheart
