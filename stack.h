#ifndef STACK_H
#define STACK_H
#include "node.h"
class Stack
{
public:
    Stack();
    Node *TOP;
    bool Push(int *dat);
    bool Pop(int *dat);
    bool IsEmpty();
    int Top()
    {
        return TOP->D;
    }
};
#endif // STACK_H
