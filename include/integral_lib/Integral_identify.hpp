#ifndef INTEGRAL_IDENTIFY
#define INTEGRAL_IDENTIFY
#include <Integral.hpp>

class Integral_identify : public Integral{
public:
    Integral_identify(double lower, double upper, double division): lower(lower), upper(upper), Integral(division) {};
protected:
    double lower;
    double upper;
};

class Integral_identify_2 : public Integral_identify{
public:
    Integral_identify_2(double lower, double upper, double division): Integral_identify(lower, upper, division) {};
    double operator() (BinaryDoubleFn A, BinaryDoubleFn B){
        double I = 0; // здесь будет интеграл
        int n = (upper - lower) / division;
        for (int i = 1; i <= n; i++){
            I+= A(division*i, division*i)*B(division*i, division*i)*division*division;
        }
        return I;
    };
    double operator() (BinaryDoubleFn A){
        double I = 0; // здесь будет интеграл
        int n = (upper - lower) / division;
        for (int i = 1; i <= n; i++){
            I+= A(division*i, division*i)*division*division;
        }
        return I;
    };
};

class Integral_identify_1 : public Integral_identify{
public:
    Integral_identify_1(double lower, double upper, double division): Integral_identify(lower, upper, division) {};
    double operator() (UnaryDoubleFn A, UnaryDoubleFn B){
        double I = 0; // здесь будет интеграл
        int n = (upper - lower) / division;
        for (int i = 1; i <= n; i++){
            I+= A(division*i)*B(division*i)*division;
        }
        return I;
    };
    double operator() (UnaryDoubleFn A){
        double I = 0; // здесь будет интеграл
        int n = (upper - lower) / division;
        for (int i = 1; i <= n; i++){
            I+= A(division*i)*division;
        }
        return I;
    };
};

#endif