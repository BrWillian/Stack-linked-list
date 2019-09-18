#include <iostream>
#include <stack.h>
#include <node.h>

using namespace std;

int main()
{
    Stack pilha;

    int x = 100;
    int z = 1500;
    int k = 5000;
    int i = 6000;

    pilha.Push(&x);
    pilha.Push(&z);
    pilha.Push(&k);
    pilha.Push(&i);
    pilha.Pop(&x);

    cout<<pilha.TOP->GetTop()<<endl;

    if (pilha.IsEmpty())
    {
        cout<<"Pilha vazia!"<<endl;
    }else
    {
        cout<<"Pilha nao vazia!"<<endl;
    }
}
