#include <rho_Macsvel.hpp>
#include <cmath>

rho_Macsvel::rho_Macsvel (double m, double T, int_my N): rho(m, T, N) {chemical_potential = log( m/(2*M_PI*T)) * 3/2 * T;};
double rho_Macsvel::operator() (double p, double x) {
    return exp( (chemical_potential -abs(p)*abs(p)/m ) /T );
};
BinaryDoubleFn rho_Macsvel::this_reference() {return *this;};