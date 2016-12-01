#include <iostream>

#include "queue.h"

Queue::Queue()
{
    f = nullptr; // Говорим, что f указывает вникуда (массив пуст)
    size = 0;
}

Queue::Queue(Figure* _f)
{
    f = new Figure*; // Выделяем память под 1 элемент типа "Указатель на Figure"
    f[0] = _f; // Кладём в массив элемент, переданный в качестве параметра в функцию
    size = 1;
}

Queue::~Queue()
{
    delete[] f; // Освождаем всю память, занятую массивом
}

void Queue::put(Figure* _f)
{
    Figure** temp = new Figure*[size+1]; // Выделяем память под массив размером size+1
    for(int i = 0; i < size; i++) // Заполняем новый массив, элементами исходного
    {
        temp[i] = f[i];
    }
    temp[size] = _f; // Добавляем последним элементом тот, который передан в качестве параметра

    size++; // увеличиваем размер на 1

    delete[] f; // Удаляем исходный массив
    f = temp; // Говорим, что исходный массив теперь равен новому

    temp = nullptr;
}

Figure* Queue::get()
{
    return f[0]; // Получаем нулевой элемент массива
}

void Queue::show_squares()
{
    double sum = 0;
    for(int i = 0; i < size; i++) // Проходим по всему массиву
    {
        sum += f[i]->GetSquare(); // Применяем к каждой фигуре из массива функцию подсчета площади и добавляем результат к сумме
    }

    std::cout << "Sum figures squares = " << sum  << std::endl;
}


