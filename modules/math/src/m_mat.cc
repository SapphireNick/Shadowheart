#include "m_mat.hh"

namespace Shadowheart {
namespace Math {

mat2::mat2(const vec2& x, const vec2& y) : _m{x, y} {}
vec2& mat2::operator[](const int& i) { return _m[i]; }

mat3::mat3(const vec3& x, const vec3& y, const vec3& z) : _m{x, y, z} {}
vec3& mat3::operator[](const int& i) { return _m[i]; }

mat4::mat4(const vec4& x, const vec4& y, const vec4& z, const vec4& w) : _m{x, y, z, w} {}
vec4& mat4::operator[](const int& i) { return _m[i]; }

imat2::imat2(const ivec2& x, const ivec2& y) : _m{x, y} {}
ivec2& imat2::operator[](const int& i) { return _m[i]; }

imat3::imat3(const ivec3& x, const ivec3& y, const ivec3& z) : _m{x, y, z} {}
ivec3& imat3::operator[](const int& i) { return _m[i]; }

imat4::imat4(const ivec4& x, const ivec4& y, const ivec4& z, const ivec4& w) : _m{x, y, z, w} {}
ivec4& imat4::operator[](const int& i) { return _m[i]; }

}  // namespace Math
}  // namespace Shadowheart
