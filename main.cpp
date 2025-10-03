#include "bibls.h"

int main()
{
    Calculator calc(2025, 5266, "52Xhaunt");
    calc.get_info();
    std::cout << calc.go_calc(2, 7, '&') << std::endl;
    Calculator calc_2;
    calc_2.get_info();
    return 0;
}