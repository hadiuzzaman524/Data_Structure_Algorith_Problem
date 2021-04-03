#include <iostream>

using namespace std;

int main()
{
    int arr[]= {1,2,4,5,3};
    int n=sizeof(arr)/sizeof(int);

    for(int i=1; i<n; i++)
    {
        int j=i-1;
        int val=arr[i];

        while(j>-1&& arr[j]>val)
        {
            arr[j+1]=arr[j];

            j--;

            for(int i=0; i<n; i++)
                cout<< arr[i]<< " ";
            cout<<endl;
        }


        arr[j+1]=val;


    }
    for(int i=0; i<n; i++)
        cout<< arr[i]<< " ";
    cout<<endl;



    return 0;
}
