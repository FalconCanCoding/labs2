#ifndef QUEUE_H
#define QUEUE_H

#include "figure.h"

class Queue
{
    Figure**    f; // Массив указателей на класс "Фигура"
    int         size; // Размер массива
public:
    Queue();
    Queue(Figure*);
    ~Queue();

    void    put(Figure*); // Положить элемент в очередь
    Figure* get(); // Взять первый элемент из очереди
    void    show_squares(); // Посчитать и вывесли сумму площадей всех фигур из очереди
};

#endif // QUEUE_H
