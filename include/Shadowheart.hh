#ifndef SHADOWHEART_HH
#define SHADOWHEART_HH

namespace Shadowheart {

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

}  // namespace Shadowheart

#endif  // SHADOWHEART_HH
