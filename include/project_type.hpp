#ifndef PROJECTS_TYPE
#define PROJECTS_TYPE

#include <functional>
using UnaryDoubleFn = std::function<double (double)>;
using BinaryDoubleFn = std::function<double (double, double)>;

#include <cstdint>
typedef long long int int_my;

// начиная с c++23
// #include <cstdfloat>
// typedef float128_t float_my;

#endif