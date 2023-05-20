#ifndef ENERGY
#define ENERGY

#include <project_type.hpp>

class energy {
    public:
        energy () {};
        virtual double operator() (double x, double p) = 0;
};
#endif