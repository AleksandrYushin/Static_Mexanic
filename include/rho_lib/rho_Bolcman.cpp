#include <rho_Bolcman.hpp>
#include <cmath>
#include <Integral.hpp>

rho_Bolcman::rho_Bolcman (double m, double T, int N, potencial* f): rho(m, T, N), f(f) {};
double rho_Bolcman::operator() (double p, double x) {
    return exp((chemical_potential- f->operator()(x)*m )/T);
};
BinaryDoubleFn rho_Bolcman::this_reference() {return *this;};