#include "../lib/glad/include/glad/glad.h"
#include "../lib/glfw/include/GLFW/glfw3.h"
#include "../include/Shadowheart.hh"

#include <iostream>

void Shadowheart::start() {
    // Execute load function to load user preferences and settings
    Shadowheart::load();

    // Start creting OpenGL context
    glfwInit();
    
    // Set the OpenGL version and profile for this software
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Create the window object
    // TODO : Implement usage of user settings for window settings
    // This will do for testing
    GLFWwindow* window = glfwCreateWindow(800, 600, "Gametitle", NULL, NULL);
    if (window == NULL) {
        std::cout << "ERROR::SHADOWHEART::FAILED_TO_CREATE_WINDOW" << std::endl;
        glfwTerminate();
        return;
    }
    glfwMakeContextCurrent(window);

    // Setup glad context
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cout << "ERROR::SHADOWHEART::FAILED_TO_INITIALIZE_GLAD" << std::endl;
        return;
    }

    // Set window dimensions for rendering
    // TODO : Create callback-functions for input and resize handling
    // Also implement usage of user settings here aswel
    glViewport(0, 0, 800, 600);

    // MAIN LOOP
    while (!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();

        // User functions for drawing and game-logic goes here
        Shadowheart::draw();
        Shadowheart::update();
    }

    // Terminate everything on closure
    glfwTerminate();
    return;
}