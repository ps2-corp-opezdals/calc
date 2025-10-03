#include "bibls.h"

Calculator::Calculator(unsigned int y, unsigned int m, std::string n)
{
    year = y;
    model = m;
    name = n;
}
Calculator::Calculator(){
    year = 0;
    model = 0;
    name = "None";
}
Calculator::~Calculator(){
    std::cout << "Уничтожена модель: " << model << std::endl;
}
void Calculator::get_info()
{
    std::cout << "year--" << year << std::endl;
    std::cout << "model--" << model << std::endl;
    std::cout << "name--" << name << std::endl;
}