#ifndef R_SHADER_HH
#define R_SHADER_HH

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include "glad/glad.h"

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
*
*/
class Shader {
private:
  unsigned int _id;

public:
  /**
   * @brief Takes shader-paths, compiles and links shaders into a shader-program
   * @param: const std::string &vertexShaderPath
   *       : const std::string &fragmentShaderPath
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
}  // namespace Renderer
}  // namespace Shadowheart

#endif  // R_SHADER_HH
