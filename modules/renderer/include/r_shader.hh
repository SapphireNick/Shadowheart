#ifndef R_SHADER_HH
#define R_SHADER_HH

#include "glad/glad.h"
#include "m_vec.hh"

namespace Shadowheart {
namespace Renderer {
/**
 * Class to ease use of shaders
 *
 * This class is used to parse shaders and compile them into a functioning
 * shaderprogram for use in the actual rendering steps. The files will get
 * parsed and compiled, linked to a new shaderprogram, which will be the id
 * of the Object, and compiled. Convienence functions ease to need to change
 * global shader variables and starting the use of the desired program.
 */
class Shader {
private:
  unsigned int _id;

public:
  /**
   * @brief Takes shader-paths, compiles and links shaders into a shader-program
   * @param: const std::string& vertexShaderPath
   *       : const std::string& fragmentShaderPath
   * @return: void
   */
  Shader(const std::string& vertexShaderPath, const std::string& fragmentShaderPath);

  /**
   * @brief Destroys objects and frees / deletes associated shader-program
   * @param: void
   * @return: void
   */
  ~Shader();

  /**
   * @brief Activate / Use asociated shader-program
   * @param: void
   * @return: void
   */
  void use();

  // Uniform functions for float data

  /**
   * @brief Set float uniform in current shader
   * @param: std::string name_of_uniform
   *       : Math::vec1 data
   * @return: void
   */
  void setUniformf(std::string name_of_uniform, Math::vec1 data);

  /**
   * @brief Set float uniform in current shader
   * @param: std::string name_of_uniform
   *       : Math::vec2 data
   * @return: void
   */
  void setUniform2f(std::string name_of_uniform, Math::vec2 data);

  /**
   * @brief Set float uniform in current shader
   * @param: std::string name_of_uniform
   *       : Math::vec3 data
   * @return: void
   */

  void setUniform3f(std::string name_of_uniform, Math::vec3 data);

  /**
   * @brief Set float uniform in current shader
   * @param: std::string name_of_uniform
   *       : Math::vec4 data
   * @return: void
   */
  void setUniform4f(std::string name_of_uniform, Math::vec4 data);

  // Uniform function for int data

  /**
   * @brief Set int uniform in current shader
   * @param: std::string name_of_uniform
   *       : Math::ivec1 data
   * @return: void
   */
  void setUniformi(std::string name_of_uniform, Math::ivec1 data);

  /**
   * @brief Set int uniform in current shader
   * @param: std::string name_of_uniform
   *       : Math::ivec2 data
   * @return: void
   */
  void setUniform2i(std::string name_of_uniform, Math::ivec2 data);

  /**
   * @brief Set int uniform in current shader
   * @param: std::string name_of_uniform
   *       : Math::ivec3 data
   * @return: void
   */
  void setUniform3i(std::string name_of_uniform, Math::ivec3 data);

  /**
   * @brief Set int uniform in current shader
   * @param: std::string name_of_uniform
   *       : Math::ivec4 data
   * @return: void
   */
  void setUniform4i(std::string name_of_uniform, Math::ivec4 data);

}; /* Shader */
}  // namespace Renderer
}  // namespace Shadowheart

#endif  // R_SHADER_HH
