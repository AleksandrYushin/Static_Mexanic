#ifndef POTENCIAL
#define POTENCIAL

#include <project_type.hpp>

class potencial {
    public:
        potencial () {};
        virtual double operator() (double x) = 0;
};
#endif