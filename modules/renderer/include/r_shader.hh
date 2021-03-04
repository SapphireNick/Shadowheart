#ifndef R_SHADER_HH
#define R_SHADER_HH

#include "glad/glad.h"

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

namespace Shadowheart {
namespace Renderer {
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
  Shader(const std::string &vertexShaderPath,
         const std::string &fragmentShaderPath);

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

  // TODO: #5 convenience functions to access / modify uniforms

}; /* Shader */
} // namespace Renderer
} // namespace Shadowheart

#endif // R_SHADER_HH
