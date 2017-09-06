#include<bits/stdc++.h>
using namespace std;

//Stack Implementation starts...

#define MAX 1000
class Stack
{
    int top;
public:
    int a[MAX];    //Maximum size of Stack

    Stack()  { top = -1; }
    void push(int x);
    int pop();
    bool isEmpty();
};
void Stack::push(int x)
{
    if (top >= MAX)
        cout << "Stack Overflow";
    else
        a[++top] = x;
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}
