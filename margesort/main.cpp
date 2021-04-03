#include <iostream>

using namespace std;
int comp=0;

void marge(int arr[],int starting,int mid,int ending)
{

    int n1=mid-starting+1;
    int n2=ending-mid;
    int left[n1];
    int right[n2];

    for(int i=0; i<n1; i++)
        left[i]=arr[starting+i];
    for(int j=0; j<n2; j++)
        right[j]=arr[mid+j+1];

    int i=0,j=0,k=starting;
    while(i<n1&&j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            k++;
            i++;

        }
        else
        {
            arr[k]=right[j];
            k++;
            j++;
          comp+=(j-k);
        }
    }

    while(i<n1)
    {

        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=right[j];
        j++;
        k++;
    }



}

void margeSort(int arr[],int starting,int ending)
{

    if(starting<ending)
    {
        int mid=starting+(ending-starting)/2;
        margeSort(arr,starting,mid);
        margeSort(arr,mid+1,ending);
        marge(arr,starting,mid,ending);

    }
}

int main()
{
    int arr[]= {2,4,1,32,5};
    int n=sizeof(arr)/sizeof(int);
    margeSort(arr,0,n-1);

    for(int i=0; i<n; i++)
        cout<< arr[i]<< " ";
    cout<<endl;
    cout<<comp;
    return 0;
}
