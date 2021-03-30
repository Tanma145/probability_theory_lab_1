// ME_probability1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

double inverse_probability(double x, double lambda) {
    double a = 1 / (2 * lambda);
    if (0 <= x && x <= 1) {
        if (x <= 0.5)
            return (log(x) - log(a * lambda)) / lambda;
        else
            return (log(a * lambda) - log(2 * a * lambda - x)) / lambda;
    }
    else 
        throw 0;
}

int main()
{
    int N = 10000;
    double expected_value = 0;
    double variance = 0;
    double lambda;
    double mu;
    std::cin >> lambda;
    for (int i = 0; i < 100; i++) {
        mu = inverse_probability((double) rand()/RAND_MAX, lambda);
        expected_value += mu;
        std::cout << mu << std::endl;
    }
    expected_value /= N;
    std::cout << "Expected value: " << expected_value << std::endl;
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
