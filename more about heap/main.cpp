#include <iostream>

using namespace std;

void inserIntoHeap(int arr[],int n)
{
    int last= arr[n];
    int i=n;
    while(i>1 && last > arr[i/2])
    {
        arr[i]=arr[i/2];
        i=i/2;
    }
    arr[i]=last;
}
void deleteFromHeap(int arr[], int n)
{
    int first= arr[1];
    int last= arr[n];
    arr[1]=last;

    int i=1;
    int j=i*2;
    while(j<n-1)
    {

        if(arr[j]< arr[j+1])
            j=j+1;

        if(arr[j]>arr[i])
        {
            swap(arr[i], arr[j]);
            i=j;
            j=2*i;
        }
        else
        {
            break;
        }
    }
}

void heapify(int arr[], int i, int n)
{

    int largest= i;
    int left= i*2+1;
    int right=i*2+2;

    if(i<n && arr[largest] < arr[left])
        largest=left;
    if(i<n&& arr[largest]<arr[right])
        largest=right;

    if(largest!=i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, largest, n);
    }

}
void heapSort(int arr[], int n)
{


}
int main()
{
    int arr[]= {30,20,15,5,10,12,6,40};

    int n=sizeof(arr)/sizeof(int);
    for(int i=n/2-1; i>=0; i--)
        heapify(arr, i, n-1);

    for(int x: arr)
    {
        cout<< x<< " ";
    }
    cout<<endl;


    return 0;

}
