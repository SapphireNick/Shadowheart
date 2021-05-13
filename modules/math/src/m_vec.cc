#include "m_vec.hh"

namespace Shadowheart {
namespace Math {

vec2::vec2(const float& x, const float& y) : _v{x, y} {}
float& vec2::operator[](const int& i) { return _v[i]; }
vec2::operator float*() { return _v; }
vec2 vec2::operator+(const vec2& a) { return vec2(_v[0] + a._v[0], _v[1] + a._v[1]); }
float vec2::operator*(const vec2& a) { return _v[0] * a._v[0] + _v[1] + a._v[1]; }
vec2 vec2::operator*(const float& a) { return vec2(_v[0] * a, _v[1] * a); }
vec2 vec2::operator*(const float& a, const vec2& b) { return b * a; }

vec3::vec3(const float& x, const float& y, const float& z) : _v{x, y, z} {}
float& vec3::operator[](const int& i) { return _v[i]; }
vec3::operator float*() { return _v; }
vec3 vec3::operator+(const vec3& a) { return vec3(_v[0] + a._v[0], _v[1] + a._v[1], _v[2] + a._[2]); }
float vec3::operator*(const vec3& a) { return _v[0] * a._v[0] + _v[1] * a._v[1] + _v[2] * a._v[2]; }
vec3 vec3::operator*(const float& a) { return vec3(_v[0] * a, _v[1] * a, _v[2] * a); }
vec3 vec3::operator*(const float& a, const vec3& b) { return b * a; }

vec4::vec4(const float& x, const float& y, const float& z, const float& w) : _v{x, y, z, w} {}
float& vec4::operator[](const int& i) { return _v[i]; }
vec4::operator float*() { return _v; }
vec4& vec4::operator+(const vec4& a) {
  return vec4(_v[0] + a._v[0], _v[1] + a._v[1], _v[2] + a._v[2], _v[3] + a._v[3]);
}
float vec4::operator*(const vec4& a) { return _v[0] * a._v[0] + _v[1] * a._v[1] + _v[2] * a._v[2] + _v[3] + a._v[3]; }
vec4 vec4::operator*(const float& a) { return vec4(_v[0] * a, _v[1] * a, _v[2] * a, _v[3] * a); }
vec4 vec4::operator*(const float& a, const vec4& b) { return b * a; }

ivec2::ivec2(const int& x, const int& y) : _v{x, y} {}
int& ivec2::operator[](const int& i) { return _v[i]; }
ivec2::operator int*() { return _v; }
ivec2 ivec2::operator+(const ivec2& a) { return ivec2(_v[0] + a._v[0], _v[1] + a._v[1]); }
int ivec2::operator*(const ivec2& a) { return _v[0] * a._v[0] + _v[1] + a._v[1]; }
ivec2 ivec2::operator*(const int& a) { return ivec2(_v[0] * a, _v[1] * a); }
ivec2 ivec2::operator*(const int& a, const ivec2& b) { return b * a; }

ivec3::ivec3(const int& x, const int& y, const int& z) : _v{x, y, z} {}
int& ivec3::operator[](const int& i) { return _v[i]; }
ivec3::operator int*() { return _v; }
ivec3& ivec3::operator+(const ivec3& a) { return ivec3(_v[0] + a._v[0], _v[1] + a._v[1], _v[2] + a._v[2]); }
int ivec3::operator*(const ivec3& a) { return _v[0] * a._v[0] + _v[1] * a._v[1] + _v[2] * a._v[2]; }
ivec3 ivec3::operator*(const int& a) { return ivec3(_v[0] * a, _v[1] * a, _v[2] * a); }
ivec3 ivec3::operator*(const int& a, const ivec3& b) { return b * a; }

ivec4::ivec4(const int& x, const int& y, const int& z, const int& w) : _v{x, y, z, w} {}
int& ivec4::operator[](const int& i) { return _v[i]; }
ivec4::operator int*() { return _v; }
ivec4& ivec4::operator+(const ivec4& a) {
  return ivec4(_v[0] + a._v[0], _v[1] + a._v[1], _v[2] + a._v[2], _v[3] + a._v[3]);
}
int ivec4::operator*(const ivec4& a) { return _v[0] * a._v[0] + _v[1] * a._v[1] + _v[2] * a._v[2] + _v[3] + a._v[3]; }
ivec4 ivec4::operator*(cont int& a) { return ivec4(_v[0] * a, _v[1] * a, _v[2] * a, _v[3] * a); }
ivec4 ivec4::operator*(const int& a, const ivec4& b) { return b * a; }

}  // namespace Math
}  // namespace Shadowheart
