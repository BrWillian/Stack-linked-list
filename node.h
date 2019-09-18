#ifndef NODE_H
#define NODE_H
class Node
{
public:
    int D;
    Node *next;
    Node();
    static Node* MontaNode(int *dat)
    {
        Node* p = new Node;
        if(p)
        {
            p->D = *dat;
            p->next = 0;
        }

        return p;
    }
    static void DesmontaNode(int *dat, Node *p)
    {
        if(p)
        {
            *dat = p->D;
            delete p;
        }
    }
};
#endif // NODE_H
