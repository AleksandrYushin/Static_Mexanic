#ifndef ENERGY
#define ENERGY
class energy {
    public:
        energy () {};
        virtual double operator() (double x, double p) = 0;
};
#endif