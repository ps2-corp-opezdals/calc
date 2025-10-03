#include "bibls.h"
#include <fstream>
#include <sstream>
#include <chrono>

int main()
{
    rand();
    auto start = std::chrono::high_resolution_clock::now();
    Calculator calc(2025, 5266, "52Xhaunt");
    calc.get_info();
    std::ifstream file("test_3000.txt");
    if (!file.is_open())
    {
        std::cerr << "Не удалось открыть файл!" << std::endl;
        return 0;
    }
    std::string line;
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        float a, b;
        char oper;

        // Читаем два числа и оператор из строки
        if (iss >> a >> b >> oper)
        {
            try
            {
                float result = calc.go_calc(a, b, oper);
                std::cout << a << " " << b << " " << oper << " = " << result << std::endl;
            }
            catch (const std::exception &e)
            {
                std::cout << "Ошибка: " << e.what() << " в выражении: " << line << std::endl;
            }
        }
        else
        {
            std::cout << "Неверный формат строки: " << line << std::endl;
        }
    }

    file.close();
    // Конец измерения времени
    auto end = std::chrono::high_resolution_clock::now();

    // Вычисление длительности
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    std::cout << "Время выполнения: " << duration.count() << " миллисекунд" << std::endl;
    return 0;
}
