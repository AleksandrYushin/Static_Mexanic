#ifndef RHO
#define RHO
#include <project_type.hpp>

class rho {
    public:
        rho (double m, double T, int_my N);
        virtual double operator() (double p, double x) = 0;
        void normalization();
        double get_chemical_potential();
        virtual BinaryDoubleFn this_reference() = 0;
    protected:
        double m;
        double T;
        int_my N;
        double chemical_potential = -2000;
};
#endif