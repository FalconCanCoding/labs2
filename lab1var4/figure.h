#ifndef FIGURE_H
#define FIGURE_H

class Figure
{
public:
    Figure(); // Конструктор по умолчанию
    virtual ~Figure(); // Виртуальный деструктор

    virtual double          GetSquare(); // Виртуальная функция, возвращающая площадь
    virtual void            PrintName(); // Виртуальная функция, печатающая имя
};

#endif // FIGURE_H
