#include "energy_v1.hpp"
#include <cmath>

energy_v1::energy_v1 (double a): a(a) {};
double energy_v1::operator() (double x, double p) {
    return a*x*p;
};