#ifndef NODE_H
#define NODE_H
class Node
{
private:
    int D;
    Node *next;
public:
    Node();
    int GetTop();
    void SetNext(Node *TOP);
    Node *GetNext();
    static Node* MontaNode(int *dat);
    static void DesmontaNode(int *dat, Node *p);
};
#endif // NODE_H
