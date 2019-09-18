#include "node.h"

Node::Node()
{

}
int Node::GetTop()
{
    return D;
}
void Node::SetNext(Node *TOP)
{
    next = TOP;
}
Node* Node::GetNext()
{
    return next;
}
Node* Node::MontaNode(int *dat)
{
    Node *p = new Node;
    if(p)
    {
        p->D = *dat;
        p->next = 0;
    }
    return p;
}
void Node::DesmontaNode(int *dat, Node *p)
{
    if(p)
    {
        *dat = p->D;
        delete p;
    }

}
