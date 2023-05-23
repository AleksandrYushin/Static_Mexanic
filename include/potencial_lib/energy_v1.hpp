#ifndef ENERGY_V1
#define ENERGY_V1
#include <energy.hpp>
#include <cmath>

class energy_v1 : public energy {
    public:
        energy_v1 (double a);
        double operator() (double x, double p) override;
    private:
        double a;
};
#endif