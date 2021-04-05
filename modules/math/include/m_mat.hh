#ifndef M_MAT_HH
#define M_MAT_HH

#include "m_vec.hh"

namespace Shadowheart {
namespace Math {

/**
 * 1x1 float matrix
 *
 * alias for float
 */
using mat1 = float;

/**
 * 2x2 float matrix
 *
 * TODO detailed description
 */
struct mat2 {
private:
  vec2 _m[2];

public:
  /**
   * @brief constructor defaults to {{0f, 0f}, {0f, 0f}}
   * @param: const vec2& x = {0, 0}
   *       : const vec2& y = {0, 0}
   * @return:
   */
  mat2(const vec2& x = {0, 0}, const vec2& y = {0, 0});

  /**
   * @brief access element i
   * @param: const int& i
   * @return: vec2&
   */
  vec2& operator[](const int& i);

  // TODO operator overloading
}; /* mat2 */

/**
 * 3x3 float matrix
 *
 * TODO detailed description
 */
struct mat3 {
private:
  vec3 _m[3];

public:
  /**
   * @brief constructor defaults to {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}}
   * @param: const vec3& x = {0, 0, 0}
   *       : const vec3& y = {0, 0, 0}
   *       : const vec3& z = {0, 0, 0}
   * @return:
   */
  mat3(const vec3& x = {0, 0, 0}, const vec3& y = {0, 0, 0}, const vec3& z = {0, 0, 0});

  /**
   * @brief access element i
   * @param: const int& i
   * @return: vec3&
   */
  vec3& operator[](const int& i);

  // TODO operator overloading
}; /* mat3 */

/**
 * 4x4 float matrix
 *
 * TODO detailed description
 */
struct mat4 {
private:
  vec4 _m[4];

public:
  /**
   * @brief constructor defaults to {{0f, 0f, 0f, 0f}, {0f, 0f, 0f, 0f}, {0f, 0f, 0f, 0f}, {0f, 0f, 0f, 0f}}
   * @param: const vec4& x = {0, 0, 0, 0}
   *       : const vec4& y = {0, 0, 0, 0}
   *       : const vec4& z = {0, 0, 0, 0}
   *       : const vec4& w = {0, 0, 0, 0}
   * @return:
   */
  mat4(const vec4& x = {0, 0, 0, 0}, const vec4& y = {0, 0, 0, 0},
       const vec4& z = {0, 0, 0, 0}, const vec4& w = {0, 0, 0, 0});

  /**
   * @brief access element i
   * @param: const int& i
   * @return: vec4&
   */
  vec4& operator[](const int& i);

  // TODO operator overloading
}; /* mat4 */

/**
 * 1x1 int imatrix
 *
 * alias for int
 */
using imat1 = int;

/**
 * 2x2 int imatrix
 *
 * TODO detailed description
 */
struct imat2 {
private:
  ivec2 _m[2];

public:
  /**
   * @brief constructor defaults to {{0, 0}, {0, 0}}
   * @param: const ivec2& x = {0, 0}
   *       : const ivec2& y = {0, 0}
   * @return:
   */
  imat2(const ivec2& x = {0, 0}, const ivec2& y = {0, 0});

  /**
   * @brief access element i
   * @param: const int& i
   * @return: ivec2&
   */
  ivec2& operator[](const int& i);

  // TODO operator overloading
}; /* imat2 */

/**
 * 3x3 int imatrix
 *
 * TODO detailed description
 */
struct imat3 {
private:
  ivec3 _m[3];

public:
  /**
   * @brief constructor defaults to {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}}
   * @param: const ivec3& x = {0, 0, 0}
   *       : const ivec3& y = {0, 0, 0}
   *       : const ivec3& z = {0, 0, 0}
   * @return:
   */
  imat3(const ivec3& x = {0, 0, 0}, const ivec3& y = {0, 0, 0}, const ivec3& z = {0, 0, 0});

  /**
   * @brief access element i
   * @param: const int& i
   * @return: ivec3&
   */
  ivec3& operator[](const int& i);

  // TODO operator overloading
}; /* imat3 */

/**
 * 4x4 int imatrix
 *
 * TODO detailed description
 */
struct imat4 {
private:
  ivec4 _m[4];

public:
  /**
   * @brief constructor defaults to {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}}
   * @param: const ivec4& x = {0, 0, 0, 0}
   *       : const ivec4& y = {0, 0, 0, 0}
   *       : const ivec4& z = {0, 0, 0, 0}
   *       : const ivec4& w = {0, 0, 0, 0}
   * @return:
   */
  imat4(const ivec4& x = {0, 0, 0, 0}, const ivec4& y = {0, 0, 0, 0},
        const ivec4& z = {0, 0, 0, 0}, const ivec4& w = {0, 0, 0, 0});

  /**
   * @brief access element i
   * @param: const int& i
   * @return: ivec4&
   */
  ivec4& operator[](const int& i);

  // TODO operator overloading
}; /* imat4 */

}  // namespace Math
}  // namespace Shadowheart

#endif  // M_MAT_HH
