#ifndef POTENCIAL
#define POTENCIAL
class potencial {
    public:
        potencial () {};
        virtual double operator() (double x) = 0;
};
#endif