#ifndef QUEUE_H
#define QUEUE_H

#include "element.h"

class Queue
{
    Element* first;
    Element* last;

    int count;
public:
    Queue();
    ~Queue();

    void        Put(Element* e);
    Element*    Get();
    int         Multiplication();

    void        Print();
};

#endif // QUEUE_H
