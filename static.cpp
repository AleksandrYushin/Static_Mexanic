// Средние величины определяются как A_ = Integral[по G][A * ρ(p, q) dpdq]
// Эволюция распределения ρ(p, q) задаётся как δp/δt = {H, ρ}
// 
#include <functional>
#include <cmath>

#include <iostream>
#include <rho_Macsvel.hpp>
#include <rho_Bolcman.hpp>
#include <potencial_grav.hpp>
#include <Integral.hpp>
#include <Integral_improper.hpp>
#include <project_type.hpp>
using namespace std;

int main(){   
    double m_mol = 1e-23;
    double T_gas = 273.0;
    int_my N_gas = 10;

    Integral_improper_infinity_2 I(0.0001, 0.0001);

    //Например распределение Максвелла
    rho_Macsvel q = {m_mol, T_gas, N_gas};
    cout << q.get_chemical_potential() << endl;
    double s_Kinetik = I( [m_mol] (double p, double x) {return abs(p)*abs(p)/m_mol /2;} , q);
    cout << s_Kinetik << " " << N_gas*s_Kinetik << endl;

    // //Распределение Больцмана
    // potencial_grav f_gr = potencial_grav(10000.0);
    // rho_Bolcman b = rho_Bolcman(m_mol, T_gas, N_gas, &f_gr);
    // Integral_identify_2 I2(10, 11, 0.01);
    // double s_Potenik = I2( [m_mol, f_gr] (double p, double x) mutable {return 1;} , b); //m_mol * f_gr(x)
    // cout << s_Potenik << endl;

    //Физика

};