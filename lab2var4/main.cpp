#include "element.h"
#include "queue.h"

#include <iostream>
//#include <conio.h>

int main ()
{
 Element e1(10);
 Element e2(20);
 Element e3(30);
 Element e4(40);
 Element e5(50);

 Queue q;

 q.Put(&e2);
 q.Put(&e3);
 q.Put(&e1);
 q.Put(&e5);
 q.Put(&e4);
 q.Print();

 q.Get();
 q.Get();
 q.Print();

 std::cout << q.Multiplication() << std::endl;

 //getch();
}
