#ifndef M_VEC_HH
#define M_VEC_HH

namespace Shadowheart {
namespace Math {

/**
 * 1D float vector
 *
 * alias for float
 */
using vec1 = float;

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
   * @brief constructor defaults to {0f, 0f}
   * @param: const float& x = 0
   *       : const float& y = 0
   * @return:
   */
  vec2(const float& x = 0, const float& y = 0);

  /**
   * @brief access element i
   * @param: const int& i
   * @return: float&
   */
  float& operator[](const int& i);

  /**
   * @brief implicit conversion to float*
   * @param:
   */
  operator float*();

  /**
   * @brief Overloading of addition-operator
   * @param: const Math::vec2& a
   */
  vec2 operator+(const vec2& a);

  /**
   * @brief Overloading of multiplication-operator of 2 vectors
   * @param: const Math::vec2& a
   */
  float operator*(const vec2& a);

  /**
   * @brief Overloading of multiplication-operator with a scalar
   * @param: const float& a
   */
  vec2 operator*(const float& a);

  /**
   * @brief Overloading of multiplication-operator with a scalar
   * @param: const float& a
   *         const Math::vec2& b
   */
  friend vec2 operator*(const float& a, const vec2& b);
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
   * @brief constructor defaults to {0f, 0f, 0f}
   * @param: const float& x = 0
   *       : const float& y = 0
   *       : const float& z = 0
   * @return:
   */
  vec3(const float& x = 0, const float& y = 0, const float& z = 0);

  /**
   * @brief access element i
   * @param: const int& i
   * @return: float&
   */
  float& operator[](const int& i);

  /**
   * @brief implicit conversion to float*
   * @param:
   */
  operator float*();

  /**
   * @brief Overloading of addition-operator
   * @param: Math::vec3& a
   */
  vec3 operator+(const vec3& a);

  /**
   * @brief Overloading of multiplication-operator of 2 vectors
   * @param: Math::vec3& a
   */
  float operator*(const vec3& a);

  /**
   * @brief Overloading of multiplication-operator with a scalar
   * @param: const float& a
   */
  vec3 operator*(const float& a);

  /**
   * @brief Overloading of multiplication-operator with a scalar
   * @param: const float& a
   *         const Math::vec3& b
   */
  friend vec3 operator*(const float& a, const vec3& b);
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
   * @brief constructor defaults to {0f, 0f, 0f, 0f}
   * @param: const float& x = 0
   *       : const float& y = 0
   *       : const float& z = 0
   *       : const float& w = 0
   * @return:
   */
  vec4(const float& x = 0, const float& y = 0, const float& z = 0, const float& w = 0);

  /**
   * @brief access element i
   * @param: const int& i
   * @return: float&
   */
  float& operator[](const int& i);

  /**
   * @brief implicit conversion to float*
   * @param:
   */
  operator float*();

  /**
   * @brief Overloading of addition-operator
   * @param: Math::vec4& a
   */
  vec4 operator+(const vec4& a);

  /**
   * @brief Overloading of multiplication-operator of 2 vectors
   * @param: Math::vec4& a
   */
  float operator*(const vec4& a);

  /**
   * @brief Overloading of multiplication-operator with a scalar
   * @param: const float& a
   */
  vec4 operator*(const float& a);

  /**
   * @brief Overloading of multiplication-operator with a scalar
   * @param: const float& a
   *         const Math::vec4& b
   */
  friend vec4 operator*(const float& a, const vec4& b);
}; /* vec4 */

/**
 * 1D int vector
 *
 * alias for int
 */
using ivec1 = int;

/**
 * 2D int vector
 *
 * TODO detailed description
 */
struct ivec2 {
private:
  int _v[2];

public:
  /**
   * @brief constructor defaults to {0, 0}
   * @param: const int& x = 0
   *       : const int& y = 0
   * @return:
   */
  ivec2(const int& x = 0, const int& y = 0);

  /**
   * @brief access element i
   * @param: const int& i
   * @return: int&
   */
  int& operator[](const int& i);

  /**
   * @brief implicit conversion to int*
   * @param:
   */
  operator int*();

  /**
   * @brief Overloading of addition-operator
   * @param: Math::ivec2& a
   */
  ivec2 operator+(const ivec2& a);

  /**
   * @brief Overloading of multiplication-operator of 2 vectors
   * @param: Math::ivec2& a
   */
  int operator*(const ivec2& a);

  /**
   * @brief Overloading of multiplication-operator with a scalar
   * @param: const int& a
   */
  ivec2 operator*(const int& a);

  /**
   * @brief Overloading of multiplication-operator with a scalar
   * @param: const int& a
   *         const Math::ivec2& b
   */
  friend ivec2 operator*(const int& a, const ivec2& b);
}; /* ivec2 */

/**
 * 3D int vector
 *
 * TODO detailed description
 */
struct ivec3 {
private:
  int _v[3];

public:
  /**
   * @brief constructor defaults to {0, 0, 0}
   * @param: const int& x = 0
   *       : const int& y = 0
   *       : const int& z = 0
   * @return:
   */
  ivec3(const int& x = 0, const int& y = 0, const int& z = 0);

  /**
   * @brief access element i
   * @param: const int& i
   * @return: int&
   */
  int& operator[](const int& i);

  /**
   * @brief implicit conversion to int*
   * @param:
   */
  operator int*();

  /**
   * @brief Overloading of addition-operator
   * @param: Math::ivec3& a
   */
  ivec3 operator+(const ivec3& a);

  /**
   * @brief Overloading of multiplication-operator of 2 vectors
   * @param: Math::ivec3& a
   */
  int operator*(const ivec3& a);

  /**
   * @brief Overloading of multiplication-operator with a scalar
   * @param: const int& a
   */
  ivec3 operator*(const int& a);

  /**
   * @brief Overloading of multiplication-operator with a scalar
   * @param: const const int& a
   *         const Math::ivec3& b
   */
  friend ivec3 operator*(const int& a, const ivec3& b);
}; /* ivec3 */

/**
 * 4D int vector
 *
 * TODO detailed description
 */
struct ivec4 {
private:
  int _v[4];

public:
  /**
   * @brief constructor defaults to {0, 0, 0, 0}
   * @param: const int& x = 0
   *       : const int& y = 0
   *       : const int& z = 0
   *       : const int& w = 0
   * @return:
   */
  ivec4(const int& x = 0, const int& y = 0, const int& z = 0, const int& w = 0);

  /**
   * @brief access element i
   * @param: const int& i
   * @return: int&
   */
  int& operator[](const int& i);

  /**
   * @brief implicit conversion to int*
   * @param:
   */
  operator int*();

  /**
   * @brief Overloading of addition-operator
   * @param: Math::ivec4& a
   */
  ivec4 operator+(const ivec4& a);

  /**
   * @brief Overloading of multiplication-operator of 2 vectors
   * @param: Math::ivec4& a
   */
  int operator*(const ivec4& a);

  /**
   * @brief Overloading of multiplication-operator with a scalar
   * @param: const int& a
   */
  ivec4 operator*(const int& a);

  /**
   * @brief Overloading of multiplication-operator with a scalar
   * @param: const int& a
   *         const Math::ivec4& b
   */
  friend ivec4 operator*(const int& a, const ivec4& b);
}; /* ivec4 */

}  // namespace Math
}  // namespace Shadowheart

#endif  // M_VEC_HH
