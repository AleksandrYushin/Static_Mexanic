#ifndef RHO_FERMI
#define RHO_FERMI
#include <rho.hpp>
#include <energy.hpp>

class rho_Fermi : public rho{
    public:
        rho_Fermi (double m, double T, int_my N, energy* e);
        double operator() (double p, double x) final;
        BinaryDoubleFn this_reference() final;
    private:
        energy* e;
        double chemical_potential;
};

#endif