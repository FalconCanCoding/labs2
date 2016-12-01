#ifndef ELEMENT_H
#define ELEMENT_H

class Element
{
    int value;

    Element* prev;
    Element* next;
public:
    Element();
    Element(int);

    Element*    get_prev_element();
    void        set_prev_element(Element*);

    Element*    get_next_element();
    void        set_next_element(Element*);

    int&        get_value();
};

#endif // ELEMENT_H
