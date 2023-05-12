#ifndef INTEGRAL
#define INTEGRAL

#include <functional>
using BinaryDoubleFn = std::function<double (double, double)>;

//      Релизации обращения к функционалам
//      avto A
//      double (*A)(double, double)
//      BinaryDoubleFn A

class Integral {
public:
    Integral(double division): division(division) {};
protected:
    double division;
};

#endif