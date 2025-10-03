#include "bibls.h"

class Calculator {
    private:
        unsigned int year;
        std::string name;
        unsigned int model;
    public:
        Calculator(unsigned int y , unsigned int m , std::string n ){
            year = y;
            model = m;
            name = n;
        }
         
};
