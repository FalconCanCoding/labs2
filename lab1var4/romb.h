#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

/* Клас "Ромб" наследуется от класса "Фигура"
 *
 * P.S. Наследование означает то, что класс-потомок("Ромб") берет в себя
 * все, что есть в класса-предке("Фигура") и добавляет что-то ещё(то, что
 * есть внутри этого класса)
 */

class Romb : public Figure
{
    double d1; // Ромб задан длиной
    double d2; // двух его диагоналей
public:
    Romb();
    Romb(double d1, double d2); // Конструктор с параметрами

    ~Romb();

    double  GetSquare();
    void    PrintName();
};

#endif // CIRCLE_H
