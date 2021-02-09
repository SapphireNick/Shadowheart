#include "r_shader.hh"

Shadowheart::Renderer::Shader::Shader(const std::string& vertexShaderPath,
                                      const std::string& fragmentShaderPath)
{
    std::string vertCode, fragCode;
    std::ifstream vertShaderFile, fragShaderFile;

    // Make sure streams can throw exceptions
    vertShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    fragShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);

    try {
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

    } catch(std::ifstream::failure& exception) {
        std::cout << "ERROR::RENDERER::SHADER::FILE_NOT_SUCCESSFULLY_READ" << std::endl;
    }

    // Create the actual code string for compilation and linking
    const char* vertexShaderCode = vertCode.c_str();
    const char* fragmentShaderCode = fragCode.c_str();

    // Used to check various states during compilation and linking
    int success;
    char infoLog[512];

    // Store shader-ids
    unsigned int vertShader, fragShader;
    vertShader = glCreateShader(GL_VERTEX_SHADER);
    fragShader = glCreateShader(GL_FRAGMENT_SHADER);

    glShaderSource(vertShader, 1, &vertexShaderCode, nullptr);
    glShaderSource(fragShader, 1, &fragmentShaderCode, nullptr);

    // Compile the shaders and check for compilation errors
    glCompileShader(vertShader);
    glGetShaderiv(vertShader, GL_COMPILE_STATUS, &success);
    if(!success) {
        glGetShaderInfoLog(vertShader, 512, nullptr, infoLog);
        std::cout << "ERROR::RENDERER::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
    }

    glCompileShader(fragShader);
    glGetShaderiv(fragShader, GL_COMPILE_STATUS, &success);
    if(!success) {
        glGetShaderInfoLog(fragShader, 512, nullptr, infoLog);
        std::cout << "ERROR::RENDERER::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
    }

    // Create the shader-program and check for linking errors
    unsigned int shaderProg = glCreateProgram();
    glAttachShader(shaderProg, vertShader);
    glAttachShader(shaderProg, fragShader);
    glLinkProgram(shaderProg);

    glGetProgramiv(shaderProg, GL_LINK_STATUS, &success);
    if(!success) {
        glGetProgramInfoLog(shaderProg, 512, nullptr, infoLog);
        std::cout << "ERROR::RENDERER::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
    }

    // Delete / Free the shaders
    glDeleteShader(vertShader);
    glDeleteShader(fragShader);

    // Set object _id field to compiled and linked shader-program
    _id = shaderProg;
}

Shadowheart::Renderer::Shader::~Shader()
{
    glDeleteProgram(_id);
}

void Shadowheart::Renderer::Shader::use()
{
    glUseProgram(_id);
}
