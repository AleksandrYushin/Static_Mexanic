#include <potencial_grav.hpp>

potencial_grav::potencial_grav (double M): M(M) {};
double potencial_grav::operator() (double x) {
    return -M*6.67430*pow(10,-11) / abs(x);
};
