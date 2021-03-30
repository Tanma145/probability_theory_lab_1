// ME_probability1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Random_Variable.h"


int main(){
    try {
        double lambda;
        int sample_size;
        Random_Variable xi;
        while (true) {
            std::cout << "Enter lambda: " << std::endl;
            std::cin >> lambda;
            std::cout << "Enter sample size: " << std::endl;
            std::cin >> sample_size;
            xi.set_parameter(lambda);
            xi.generate_sample(sample_size);
            for (int i = 0; i < sample_size; i++) {
                std::cout << xi.get_sample(i) << std::endl;
            }
            std::cout << "Sample mean: " << xi.get_sample_mean() << std::endl;
            std::cout << "Sample variance: " << xi.get_sample_variance() << std::endl;
        }
    }
    catch (int e) {
        std::cout << "oof";
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
