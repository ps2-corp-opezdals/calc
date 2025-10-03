#include <iostream>
#include <fstream>
#include <random>
#include <string>

int rand()
{
    std::ofstream file("test_3000.txt");
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> num_dist(1, 1000); // числа от 1 до 1000
    std::uniform_int_distribution<> op_dist(0, 3);     // 4 оператора

    char operators[] = {'+', '-', '*', '/'};

    for (int i = 0; i < 15000; ++i)
    {
        int a = num_dist(gen);
        int b = num_dist(gen);
        char op = operators[op_dist(gen)];

        // Для деления избегаем деления на ноль и делаем числа кратными
        if (op == '/')
        {
            if (b == 0)
                b = 1;
            a = a * b; // делаем результат целым числом
        }

        file << a << " " << b << " " << op << std::endl;
    }

    file.close();
    std::cout << "Файл test_3000.txt создан с 3000 строками!" << std::endl;
    return 0;
}