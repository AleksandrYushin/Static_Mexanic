#include <rho_Fermi.hpp>
#include <cmath>
#include <Integral.hpp>

rho_Fermi::rho_Fermi (double m, double T, int N, energy* e): e(e), rho(m, T, N) {};
double rho_Fermi::operator() (double p, double x) {
    return 1/ (exp((e->operator()(p, x) - chemical_potential) /T) + 1);
};
BinaryDoubleFn rho_Fermi::this_reference() {return *this;};