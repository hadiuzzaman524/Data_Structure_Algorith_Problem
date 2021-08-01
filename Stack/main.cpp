#include <iostream>

using namespace std;
const int maximum=10;

class Stack
{
    int top;
    int data[maximum];

public:
    Stack()
    {
        top=-1;
    }
    bool isEmpty();
    bool isFull();
    void push(Stack obj,int x);
    int pop(Stack obj);

};

bool Stack :: isEmpty()
{
    if(top==-1)
    {
        return true;
    }
    return false;
}

bool Stack :: isFull()
{
    if(top==maximum-1)
    {
        return true;
    }
    return false;

}

void Stack:: push(Stack stk,int x)
{
    if(stk.isFull())
    {
        cout<< "Stack Full"<<endl;
    }
    else
    {
        top++;
        data[top]=x;
    }
}


int Stack:: pop(Stack stk)
{
    int x=0;
    if(stk.isEmpty())
    {
        cout<< "Stack is Empty"<<endl;

    }
    else
    {

        x=data[top];
        top--;

    }
    return x;
}
int main()
{
    Stack stk=Stack();

    stk.push(stk,20);
    stk.push(stk,33);
    stk.push(stk,22);
    stk.push(stk,44);
    stk.push(stk,21);
    stk.push(stk,65);
    stk.push(stk,33);
    stk.push(stk,22);
    stk.push(stk,44);
    stk.push(stk,21);
    stk.push(stk,65);

    cout<<stk.pop(stk)<<endl;
    cout<<stk.pop(stk)<<endl;
    cout<<stk.pop(stk)<<endl;
    cout<<stk.pop(stk)<<endl;
    cout<<stk.pop(stk)<<endl;
    cout<<stk.pop(stk)<<endl;
    cout<<stk.pop(stk)<<endl;
    cout<<stk.pop(stk)<<endl;
    cout<<stk.pop(stk)<<endl;
    cout<<stk.pop(stk)<<endl;
    cout<<stk.pop(stk)<<endl;



    return 0;
}
