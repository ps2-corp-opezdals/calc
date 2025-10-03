#ifndef BIBLS_H
#define BIBLS_H
#include <iostream>
#include <string>

class Calculator
{
private:
    unsigned int year;
    std::string name;
    unsigned int model;
    float Plus(float a, float b);
    float Minus(float a, float b);
    float Umnozh(float a, float b);
    float Delit(float a, float b);

public:
    ~Calculator();
    Calculator(unsigned int y, unsigned int m, std::string n);
    Calculator();
    float go_calc(float a, float b, char oper);
    void get_info();
};

#endif