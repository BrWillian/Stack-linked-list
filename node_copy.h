#ifndef NODE_H
#define NODE_H
class Node
{
private:
    int D;
    Node *next;
public:
    Node();
    static Node* MontaNode(int *dat);
    static void DesmontaNode(int *dat, Node *p);


};
class Stack
{
public:
    Stack();
    Node *TOP;
    bool Push(int *dat);
    bool Pop(int *dat);
    bool IsEmpty();

};
#endif // NODE_H
