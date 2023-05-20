#ifndef INTEGRAL_IMPROPER
#define INTEGRAL_IMPROPER
#include <Integral.hpp>
#include <Integral_identify.hpp>


class Integral_improper : public Integral{
public:
    Integral_improper(double lower, double upper, double division): lower(lower), upper(upper), Integral(division) {};
protected:
    double lower;
    double upper;
};

class Integral_improper_infinity : public Integral{
public:
    Integral_improper_infinity(double division, double exactness): exactness(exactness), Integral(division) {};
protected:
    double exactness;
};

class Integral_improper_infinity_2 : public Integral_improper_infinity{
public:
    Integral_improper_infinity_2(double division, double exactness): Integral_improper_infinity(division, exactness) {};
    double operator() (BinaryDoubleFn A, BinaryDoubleFn B){
        double I = 0; // здесь будет интеграл
        double I0 = 1;
        for (int i = 100; abs(I-I0) > exactness; i+=100){
            I0 = I;
            Integral_identify_2 I_2(-i, i, division);
            I = I_2(A, B);
        };
        return I;
    };
    double operator() (BinaryDoubleFn A){
        double I = 0; // здесь будет интеграл
        double I0 = 1;
        for (int i = 100; abs(I-I0) > exactness; i+=100){
            I0 = I;
            Integral_identify_2 I_2(-i, i, division);
            I = I_2(A);
        };
        return I;
    };
};

class Integral_improper_infinity_1 : public Integral_improper_infinity{
public:
    Integral_improper_infinity_1(double division, double exactness): Integral_improper_infinity(division, exactness) {};
    double operator() (UnaryDoubleFn A, UnaryDoubleFn B){
        double I = 0; // здесь будет интеграл
        double I0 = 1;
        for (int i = 100; abs(I-I0) > exactness; i+=100){
            I0 = I;
            Integral_identify_1 I_1(-i, i, division);
            I = I_1(A, B);
        };
        return I;
    };
    double operator() (UnaryDoubleFn A){
        double I = 0; // здесь будет интеграл
        double I0 = 1;
        for (int i = 100; abs(I-I0) > exactness; i+=100){
            I0 = I;
            Integral_identify_1 I_1(-i, i, division);
            I = I_1(A);
        };
        return I;
    };
};

#endif