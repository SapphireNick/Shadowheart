#include "../include/Shadowheart.hh"

#include <iostream>

#include "../lib/glad/include/glad/glad.h"
#include "../lib/glfw/include/GLFW/glfw3.h"

namespace Shadowheart {

/**
 * A semi-global variable (for this file) conatining user settings
 */
static t_options __userwindowopt;

void start() {
  // Execute load function to load user preferences and settings
  load();

  // Start creting OpenGL context
  glfwInit();

  // Set the OpenGL version and profile for this software
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

  // Create the window object
  // TODO : Implement usage of user settings for fullscreen and resizability
  // This will do for testing
  GLFWwindow* window = glfwCreateWindow(__userwindowopt.WINDOW_WIDTH, __userwindowopt.WINDOW_HEIGHT,
                                        __userwindowopt.WINDOW_TITLE.c_str(), NULL, NULL);
#ifdef DEBUG
  if (window == NULL) {
    std::cout << "ERROR::SHADOWHEART::FAILED_TO_CREATE_WINDOW" << std::endl;
    glfwTerminate();
    return;
  }
#endif
  glfwMakeContextCurrent(window);

  // Callback function for resizing
  auto framebuffer_size_callback = [](GLFWwindow* window, int width, int height) { glViewport(0, 0, width, height); };
  glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

// Setup glad context
#ifdef DEBUG
  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    std::cout << "ERROR::SHADOWHEART::FAILED_TO_INITIALIZE_GLAD" << std::endl;
    return;
  }
#else
  gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
#endif

  // Set window dimensions for rendering
  // TODO : Create callback-functions for input and resize handling
  glViewport(0, 0, __userwindowopt.WINDOW_WIDTH, __userwindowopt.WINDOW_HEIGHT);

  // MAIN LOOP
  while (!glfwWindowShouldClose(window)) {
    glfwSwapBuffers(window);
    glfwPollEvents();

    // User functions for drawing and game-logic goes here
    draw();
    update();
  }

  // Terminate everything on closure
  glfwTerminate();
  return;
}

void setupScreen(int WINDOW_WIDTH, int WINDOW_HEIGT, std::string WINDOW_TITLE, bool FULLSCREEN, bool RESIZABLE) {
  __userwindowopt = t_options{WINDOW_WIDTH, WINDOW_HEIGT, WINDOW_TITLE, FULLSCREEN, RESIZABLE};
}

}  // namespace Shadowheart
