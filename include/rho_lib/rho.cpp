#include <rho.hpp>
#include <cmath>
#include <Integral_improper.hpp>
#include <iostream>
using namespace std;

rho::rho (double m, double T, int_my N): m(m), T(T), N(N) {}; //normalization();
void rho::normalization(){
    Integral_improper_infinity_2 I(0.1, 0.1);
    chemical_potential = log( N / I(this_reference())) * T;
};
double rho::get_chemical_potential() {return chemical_potential;};