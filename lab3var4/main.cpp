#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

/*
 * 1) Почитать про std::vector
 * 2) Почитать про шейкер-сортировку (на вики)
 */

void print(std::vector<int>& v)
{
    for(unsigned int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}


void sort(std::vector<int>& v)
{
    int temp; // временная переменная для хранения значения элемента сортируемого массива
    int item; // индекс предыдущего элемента
    for (int counter = 1; counter < v.size(); counter++)
    {
        temp = v[counter]; // инициализируем временную переменную текущим значением элемента массива
        item = counter-1; // запоминаем индекс предыдущего элемента массива
        while(item >= 0 && v[item] > temp) // пока индекс не равен 0 и предыдущий элемент массива больше текущего
        {
            v[item + 1] = v[item]; // перестановка элементов массива
            v[item] = temp;
            item--;
        }
    }
}

int main() // Без замера времени (нет кросплатформенной библиотеки)
{
    srand( time(NULL) );

    std::vector<int> v; // Создаем пустой вектор

    std::cout << "Введите кол-во элементов массива: ";
    int c = 0;
    std::cin >> c; // Вводим количество элементов вектора с клавиатуры

    for(int i = 0; i < c; i++)
    {
        int x = rand() % c; // генерация случайного числа от 0 до size-1, где size - введенный размер вектора
        v.push_back(x); // Кладем в конец вектора сгенерированное случайное значение
    }

    std::cout << "Исходный массив:" << std::endl;
    print(v);

    sort(v);

    std::cout << "Отсортированный массив: " << std::endl;
    print(v);

    return 0;
}
