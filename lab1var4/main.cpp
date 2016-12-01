#include "figure.h"
#include "rectangle.h"
#include "romb.h"
#include "queue.h"

#include <iostream>
//#include <conio.h>

int main()
{
    Figure *f1, *f2, *f3, *f4, *f5, *f6;
    Rectangle *r1, *r2, *r3;
    Romb *c1, *c2, *c3;

    r1 = new Rectangle(1, 2);  // Конструктор с параметрами
    r2 = new Rectangle(5, 7);  // вместо
    r3 = new Rectangle(15, 3); // r->a = x и r->b = y

    c1 = new Romb(1, 1);
    c2 = new Romb(2, 2);
    c3 = new Romb(3, 3);

    f1 = (Figure*)r1;
    f2 = (Figure*)r2;
    f3 = (Figure*)r3;

    f4 = (Figure*)c1;
    f5 = (Figure*)c2;
    f6 = (Figure*)c3;

    Queue q;

    q.put(f1);
    q.put(f2);
    q.put(f3);
    q.put(f4);
    q.put(f5);
    q.put(f6);

    q.show_squares();

    delete f1;
    delete f2;
    delete f3;

    //getch();

    return 0;
}
