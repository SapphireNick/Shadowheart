#ifndef M_VEC_HH
#define M_VEC_HH

namespace Shadowheart {
namespace Math {

/**
 * 1D float vector
 *
 * TODO detailed description
 */
struct vec1 {
private:
  float _v[1];

public:
  /**
  * @brief constuctor defaults to {0f}
  * @param: const float &x = 0
  * @return: 
  */
  vec1(const float &x = 0);

  /**
  * @brief access element i
  * @param: const int &i
  * @return: float&
  */
  float& operator[](const int &i);

  // TODO operator overloading
}; /* vec1 */

/**
 * 2D float vector
 *
 * TODO detailed description
 */
struct vec2 {
private:
  float _v[2];

public:
  /**
  * @brief constuctor defaults to {0f, 0f}
  * @param: const float &x = 0
  *       : const float &y = 0
  * @return: 
  */
  vec2(const float &x = 0, const float &y = 0);

  /**
  * @brief access element i
  * @param: const int &i
  * @return: float&
  */
  float& operator[](const int &i);

  // TODO operator overloading
}; /* vec2 */

/**
 * 3D float vector
 *
 * TODO detailed description
 */
struct vec3 {
private:
  float _v[3];

public:
  /**
  * @brief constuctor defaults to {0f, 0f, 0f}
  * @param: const float &x = 0
  *       : const float &y = 0
  *       : const float &z = 0
  * @return: 
  */
  vec3(const float &x = 0, const float &y = 0, const float &z = 0);

  /**
  * @brief access element i
  * @param: const int &i
  * @return: float&
  */
  float& operator[](const int &i);

  // TODO operator overloading
}; /* vec3 */

/**
 * 4D float vector
 *
 * TODO detailed description
 */
struct vec4 {
private:
  float _v[4];

public:
  /**
  * @brief constuctor defaults to {0f, 0f}
  * @param: const float &x = 0
  *       : const float &y = 0
  *       : const float &z = 0
  *       : const float &w = 0
  * @return: 
  */
  vec4(const float &x = 0, const float &y = 0, const float &z = 0, const float &w = 0);

  /**
  * @brief access element i
  * @param: const int &i
  * @return: float&
  */
  float& operator[](const int &i);

  // TODO operator overloading
}; /* vec4 */

/**
 * 1D int ivector
 *
 * TODO detailed description
 */
struct ivec1 {
private:
  int _v[1];

public:
  /**
  * @brief constuctor defaults to {0f}
  * @param: const int &x = 0
  * @return: 
  */
  ivec1(const int &x = 0);

  /**
  * @brief access element i
  * @param: const int &i
  * @return: int&
  */
  int& operator[](const int &i);

  // TODO operator overloading
}; /* ivec1 */

/**
 * 2D int ivector
 *
 * TODO detailed description
 */
struct ivec2 {
private:
  int _v[2];

public:
  /**
  * @brief constuctor defaults to {0f, 0f}
  * @param: const int &x = 0
  *       : const int &y = 0
  * @return: 
  */
  ivec2(const int &x = 0, const int &y = 0);

  /**
  * @brief access element i
  * @param: const int &i
  * @return: int&
  */
  int& operator[](const int &i);

  // TODO operator overloading
}; /* ivec2 */

/**
 * 3D int ivector
 *
 * TODO detailed description
 */
struct ivec3 {
private:
  int _v[3];

public:
  /**
  * @brief constuctor defaults to {0f, 0f, 0f}
  * @param: const int &x = 0
  *       : const int &y = 0
  *       : const int &z = 0
  * @return: 
  */
  ivec3(const int &x = 0, const int &y = 0, const int &z = 0);

  /**
  * @brief access element i
  * @param: const int &i
  * @return: int&
  */
  int& operator[](const int &i);

  // TODO operator overloading
}; /* ivec3 */

/**
 * 4D int ivector
 *
 * TODO detailed description
 */
struct ivec4 {
private:
  int _v[4];

public:
  /**
  * @brief constuctor defaults to {0f, 0f}
  * @param: const int &x = 0
  *       : const int &y = 0
  *       : const int &z = 0
  *       : const int &w = 0
  * @return: 
  */
  ivec4(const int &x = 0, const int &y = 0, const int &z = 0, const int &w = 0);

  /**
  * @brief access element i
  * @param: const int &i
  * @return: int&
  */
  int& operator[](const int &i);

  // TODO operator overloading
}; /* ivec4 */

}  // namespace Math
}  // namespace Shadowheart

#endif  // M_VEC_HH
