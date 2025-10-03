#include "bibls.h"

Calculator::Calculator(unsigned int y, unsigned int m, std::string n)
{
    year = y;
    model = m;
    name = n;
}
Calculator::Calculator()
{
    year = 0;
    model = 0;
    name = "None";
}
Calculator::~Calculator()
{
    std::cout << "Уничтожена модель: " << model << std::endl;
}

void Calculator::get_info()
{
    std::cout << "year--" << year << std::endl;
    std::cout << "model--" << model << std::endl;
    std::cout << "name--" << name << std::endl;
}
float Calculator::go_calc(float a, float b, char oper)
{
    switch (oper)
    {
    case '+':
        return Plus(a, b);
        break;
    case '-':
        return Minus(a, b);
        break;
    case '*':
        return Umnozh(a, b);
        break;
    case '/':
        if (b == 0)
        {
            throw std::invalid_argument("Division by zero");
        }
        return Delit(a, b);
        break;

    default:
        std::cout << "wait upd :( obratites po nomeru 8922219653";
        return 0;
    }
}
float Calculator::Plus(float a, float b)
{
    return a + b;
}
float Calculator::Minus(float a, float b)
{
    return a - b;
}
float Calculator::Umnozh(float a, float b)
{
    return a * b;
}
float Calculator::Delit(float a, float b)
{
    return a / b;
}