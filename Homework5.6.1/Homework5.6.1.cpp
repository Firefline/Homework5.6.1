// Homework5.6.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <map>

struct cmp
{
    bool operator()(const char& a, const char& b) const
    {
        return a > b;
    }
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    
    std::map<char, int> map;
    std::multimap<int, char, cmp> map_reverse;
    std::multimap<int, char>::iterator it;
    std::string word;

    std::cout << "[IN]: ";
    std::cin >> word;

    for (const auto& a : word)
    {
        ++map[a];
    }
    for (const auto& a : map)
    {
        map_reverse.insert({ a.second, a.first });
    }

    std::cout << "[OUT]: " << std::endl;
    for (const auto& a : map_reverse)
    {
        std::cout << a.second << ": " << a.first << std::endl;
    }

    return 0;
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
