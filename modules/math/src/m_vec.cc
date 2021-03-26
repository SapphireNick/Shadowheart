#include "m_vec.hh"

namespace Shadowheart {
namespace Math {

Shadowheart::Math::vec1::vec1(const float &x) : _v{x} {}
float& Shadowheart::Math::vec1::operator[](const int &i) { return _v[i]; }

Shadowheart::Math::vec2::vec2(const float &x, const float &y) : _v{x, y} {}
float& Shadowheart::Math::vec2::operator[](const int &i) { return _v[i]; }

Shadowheart::Math::vec3::vec3(const float &x, const float &y, const float &z) : _v{x, y, z} {}
float& Shadowheart::Math::vec3::operator[](const int &i) { return _v[i]; }

Shadowheart::Math::vec4::vec4(const float &x, const float &y, const float &z, const float &w) : _v{x, y, z, w} {}
float& Shadowheart::Math::vec4::operator[](const int &i) { return _v[i]; }

Shadowheart::Math::ivec1::ivec1(const int &x) : _v{x} {}
int& Shadowheart::Math::ivec1::operator[](const int &i) { return _v[i]; }

Shadowheart::Math::ivec2::ivec2(const int &x, const int &y) : _v{x, y} {}
int& Shadowheart::Math::ivec2::operator[](const int &i) { return _v[i]; }

Shadowheart::Math::ivec3::ivec3(const int &x, const int &y, const int &z) : _v{x, y, z} {}
int& Shadowheart::Math::ivec3::operator[](const int &i) { return _v[i]; }

Shadowheart::Math::ivec4::ivec4(const int &x, const int &y, const int &z, const int &w) : _v{x, y, z, w} {}
int& Shadowheart::Math::ivec4::operator[](const int &i) { return _v[i]; }

}  // namespace Math
}  // namespace Shadowheart
