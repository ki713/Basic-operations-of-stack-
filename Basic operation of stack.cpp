#include <bits/stdc++.h>
#define MAX 1000
using namespace std;
class Stack
{
    int top;
    public:
    int a[MAX];
    Stack()
    {
        top = -1;
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();

};
bool Stack::push(int x)
{
    if(top >= (MAX-1))
    {
        cout<<"Stack overflow"<<endl;
        return false;
    }
    else
    {
        a[++top] = x ;
        cout<<"Top element is:"<<x<<endl;
        return true;
    }
}
int Stack::pop()
{
    if(top<0)
    {
        cout<<"Stack underflow"<<endl;
        return 0;
    }
    else
    {
        int x = a[top--] ;
        return x;
    }
}
int Stack::peek()
{
    if(top<0)
    {
        cout<<"Stack Underflow"<<endl;
        return 0;
    }
    else
    {
        int x = a[top];
        return x;
    }
}
bool Stack::isEmpty()
{
    return(top<0);
}
int main(){
    class Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"Element to be popped is:"<<s.pop()<<endl;
    cout<<"Element to be popped is:"<<s.pop()<<endl;
    while(!s.isEmpty())
    {
        cout<<s.peek()<<endl;
        s.pop();
    }






return 0;
}