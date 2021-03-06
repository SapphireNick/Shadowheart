#ifndef SHADOWHEART_HH
#define SHADOWHEART_HH

#include <string>

#include "../lib/glad/include/glad/glad.h"
#include "../lib/glfw/include/GLFW/glfw3.h"

namespace Shadowheart {

/**
 * Struct to hold user settings regarding the window attributes
 *
 */
struct t_options {
  int WINDOW_WIDTH;
  int WINDOW_HEIGHT;
  std::string WINDOW_TITLE;
  bool FULLSCREEN;
  bool RESIZABLE;
};

/**
 * @brief Load function before main game loop
 * @param:
 * @return: int
 */
int load();

/**
 * @brief Update function for main game logic
 * @param:
 * @return: void
 */
void update();

/**
 * @brief Draw function for main rendering inside game loop
 * @param:
 * @return: void
 */
void draw();

/**
 * @brief Function to start actual game loop and execute load function
 * @param:
 * @return: void
 */
void start();

/**
 * @brief Function to setup screen options
 * @param: int WINDOW_WIDHT
 *         int WINDOW_HEIGHT
 *         std::string WINDOW_TITLE
 *         bool fullscreen = false
 *         bool resizable = true
 * @return: void
 */
void setupScreen(int WINDOW_WIDTH, int WINDOW_HEIGT, std::string WINDOW_TITLE, bool FULLSCREEN = false,
                 bool RESIZABLE = true);

/**
 * @brief Callback function for window resizing
 * @param: GLFWwindow* window
 *         int width
 *         int height
 * @return: void
 */
void framebuffer_size_callback(GLFWwindow* window, int width, int height);

}  // namespace Shadowheart

#endif  // SHADOWHEART_HH
