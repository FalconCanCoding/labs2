#include "element.h"

Element::Element()
{
    value = 0;

    next = nullptr;
    prev = nullptr;
}

Element::Element(int _value)
{
    value = _value;

    next = nullptr;
    prev = nullptr;
}

Element* Element::get_next_element()
{
    return next;
}

void Element::set_next_element(Element* e)
{
    next = e;
}

Element* Element::get_prev_element()
{
    return prev;
}

void Element::set_prev_element(Element* e)
{
    prev = e;
}

int& Element::get_value()
{
    return value;
}

