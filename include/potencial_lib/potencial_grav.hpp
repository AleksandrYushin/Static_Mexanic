#ifndef POTENCIAL_GRAV
#define POTENCIAL_GRAV
#include "potencial.hpp"
#include <cmath>

class potencial_grav : public potencial{
    public:
        potencial_grav (double M): M(M) {};
        double operator() (double x) {
            return -M*6.67430*pow(10,-11) / abs(x);
        };
    private:
        double M;
};

#endif