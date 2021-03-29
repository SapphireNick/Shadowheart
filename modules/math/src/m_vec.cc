#include "m_vec.hh"

namespace Shadowheart {
namespace Math {

vec2::vec2(const float& x, const float& y) : _v{x, y} {}
float& vec2::operator[](const int& i) { return _v[i]; }
vec2::operator float*() { return _v; }

vec3::vec3(const float& x, const float& y, const float& z) : _v{x, y, z} {}
float& vec3::operator[](const int& i) { return _v[i]; }
vec3::operator float*() { return _v; }

vec4::vec4(const float& x, const float& y, const float& z, const float& w) : _v{x, y, z, w} {}
float& vec4::operator[](const int& i) { return _v[i]; }
vec4::operator float*() { return _v; }

ivec2::ivec2(const int& x, const int& y) : _v{x, y} {}
int& ivec2::operator[](const int& i) { return _v[i]; }
ivec2::operator int*() { return _v; }

ivec3::ivec3(const int& x, const int& y, const int& z) : _v{x, y, z} {}
int& ivec3::operator[](const int& i) { return _v[i]; }
ivec3::operator int*() { return _v; }

ivec4::ivec4(const int& x, const int& y, const int& z, const int& w) : _v{x, y, z, w} {}
int& ivec4::operator[](const int& i) { return _v[i]; }
ivec4::operator int*() { return _v; }

}  // namespace Math
}  // namespace Shadowheart
