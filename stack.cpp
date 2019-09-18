#include "stack.h"

Stack::Stack()
{
    TOP = 0;
}
bool Stack::Push(int *dat)
{
    Node *p = Node::MontaNode(dat);
    if(!p)
    {
        return false;
    }
    p->SetNext(TOP);
    TOP = p;
    return true;
}
bool Stack::Pop(int *dat)
{
    if(!TOP)
    {
        return false;
    }
    Node *p = TOP;
    TOP = p->GetNext();
    Node::DesmontaNode(dat, p);
    return true;
}
bool Stack::IsEmpty()
{
    return !TOP;
}
