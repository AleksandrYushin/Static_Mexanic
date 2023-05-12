#ifndef RHO_MACSVEL
#define RHO_MACSVEL
#include <rho.hpp>

class rho_Macsvel : public rho {
    public:
        rho_Macsvel (double m, double T, int N);
        double operator() (double p, double x);
        BinaryDoubleFn this_reference();
};

#endif