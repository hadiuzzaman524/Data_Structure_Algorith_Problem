#include <iostream>

using namespace std;

int main()
{
    int a=10;    //variable declaration
    int *p;      //pointer variable declaration
    p=&a;
    cout<< a <<endl;
    cout<< &p<<endl;
    cout<< *p<<endl;
    cout<< p<< endl;
    cout<< &a<<endl;
    return 0;
}
