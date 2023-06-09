#ifndef RHO_BOLCMAN
#define RHO_BOLCMAN
#include <rho.hpp>
#include <potencial.hpp>

class rho_Bolcman : public rho{
    public:
        rho_Bolcman (double m, double T, int_my N, potencial* f);
        double operator() (double p, double x)  override final;
        BinaryDoubleFn this_reference()  override final;
    private:
        potencial* f;
};

#endif