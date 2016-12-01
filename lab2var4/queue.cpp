#include "queue.h"

#include <iostream>

using namespace std;

Queue::Queue()
{
    first = nullptr;
    last = nullptr;
    count = 0;
}

Queue::~Queue()
{}

void Queue::Put(Element* e)
{
    if (e == nullptr)
        return;

    e->set_prev_element(last);

    if (count == 0)
    {
        last = e;
        first = e;
    }
    else
    {
        last->set_next_element(e);
        last = e;
    }

    count++;

    cout << "Element " << e->get_value() << " added to queue" << endl;
}
Element* Queue::Get()
{
    if (first == nullptr)
        return nullptr;

    Element* e = first;

    first = first->get_next_element();
    first->set_prev_element(nullptr);

    e->set_next_element(nullptr);
    count--;

    cout << "Element " << e->get_value() << " removed from queue" << endl;
    return e;
}

int Queue::Multiplication()
{
    if(count == 0)
    {
        return 0;
    }

    Element* temp = first;
    int m = 1;

    while(temp != nullptr)
    {
        m*= temp->get_value();

        temp = temp->get_next_element();
    }

    return m;
}
void Queue::Print()
{
    if(count == 0)
    {
        cout << "Queue is empty";
        return;
    }

    Element* e = first;
    while(e != nullptr)
    {
        cout << e->get_value() << " ";
        e = e->get_next_element();
    }
    cout << endl;

    e = nullptr;
}
