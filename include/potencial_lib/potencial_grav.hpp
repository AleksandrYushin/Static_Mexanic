#ifndef POTENCIAL_GRAV
#define POTENCIAL_GRAV
#include "potencial.hpp"

class potencial_grav : public potencial{
    public:
        potencial_grav (double M);
        double operator() (double x) override;
    private:
        double M;
};

#endif