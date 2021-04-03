#include <iostream>

using namespace std;

//Kadane's Algorithm

int main()
{
    int ar[]= {-2,-3,4,-1,-2,1,5,-3};

    int n=sizeof(ar)/sizeof(int);

    int maximum=0;
    int endmaximum=0;

    for(int i=0; i<n; i++)
    {
        endmaximum+=ar[i];

        if(endmaximum<0)
        {
            endmaximum=0;
        }

        if(maximum<endmaximum)
        {
            maximum=endmaximum;
        }
    }

    cout<< maximum<<endl;

    return 0;
}
