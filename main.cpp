#include <iostream>
#include <stack.h>
#include <node.h>

using namespace std;

int main()
{
    Stack pilha;

    int x = 100;
    int z = 1500;

    pilha.Push(&x);
    pilha.Push(&z);
    cout<<pilha.Top()<<endl;
    pilha.Pop(&x);
    if (pilha.IsEmpty())
    {
        cout<<"Pilha vazia!"<<endl;
    }else
    {
        cout<<"Pilha nao vazia!"<<endl;
    }
}
