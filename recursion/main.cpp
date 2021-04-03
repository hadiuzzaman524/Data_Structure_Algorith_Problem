#include <iostream>

using namespace std;


int ssum(int n){

    if(n==0)
        return 0;
    else
        return ssum(n-1)+n;

}
int main()
{
   int n=ssum(5);
   cout<< n;

    return 0;
}
