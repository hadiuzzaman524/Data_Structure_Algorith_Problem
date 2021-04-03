#include <iostream>

using namespace std;

int main()
{
    int arr1[]= {1,3,5,7};
    int arr2[]= {0,2,6,8,9};

    int n=sizeof(arr1)/sizeof(int);
    int m=sizeof(arr2)/sizeof(int);



    for(int k=m-1; k>=0; k--)
    {
        int i=n-1;
        int val=arr1[i];
        int j=i-1;

        while(j>-1&&arr2[k]<arr1[j])
        {
            arr1[j+1]=arr1[j];
            j--;

        }

        if(j!=n-2||val>arr2[k]){
          arr1[j+1]=arr2[k];
            arr2[k]=val;
        }


    }

    for(int i=0; i<n; i++)
        cout<< arr1[i]<< " ";
    cout<<endl;
    for(int j=0; j<m; j++)
        cout<< arr2[j]<< " ";
    return 0;
}
