#ifndef RHO
#define RHO

#include <functional>
using BinaryDoubleFn = std::function<double (double, double)>;

class rho {
    public:
        rho (double m, double T, int N);
        virtual double operator() (double p, double x) = 0;
        void normalization();
        double get_chemical_potential();
        virtual BinaryDoubleFn this_reference() = 0;
    protected:
        double m;
        double T;
        int N;
        double chemical_potential = 0;
};
#endif