#include <iostream>

using namespace std;
/*
void heapInsert(int arr[], int n)
{
    int i=n;

    int temp=arr[n];

    while(i>1&&temp > arr[i/2])
    {
        arr[i]=arr[i/2];
        i=i/2;
    }
    arr[i]=temp;
}
void deleteFromHeap(int arr[], int n)
{
    int val= arr[1];
    int i=1, j=2*i;
    arr[1]=arr[n];

    while(j<n-1)
    {

        if(arr[j]<arr[j+1])
            j=j+1;

        if(arr[i]< arr[j])
        {
            swap(arr[i], arr[j]);
            i=j;
            j=2*i;
        }

        arr[n]=val;
    }

}
int main()
{
    int heap[]= {0,10,20,30,25,5,40,35};

    for(int i=2; i<=7; i++)
    {
        heapInsert(heap,i);
    }

    for(int x:heap)
    {
        cout<< x<< " ";
    }
    cout<<endl;

   for(int i=2; i<=7; i++)
    {
        deleteFromHeap(heap,i);
    }
        for(int x:heap)
    {
        cout<< x<< " ";
    }
    cout<<endl;
    return 0;
}*/

void ins(int arr[], int n)
{
    int i=n;
    int temp= arr[n];
    cout<< "Size: "<< n<< " last: "<<temp<<endl;
    while(i>1 && temp> arr[i/2])
    {
        arr[i]=arr[i/2];
        i=i/2;
    }
    arr[i]=temp;

    for(int i=0; i<=n; i++)
    {
        cout<< arr[i]<< " ";
    }
    cout<<endl;
}
void insertIntoHeap(int arr[], int val, int heapsize, int &currentSize)
{

    if(currentSize>heapsize)
    {
        cout<< "Heap is full"<<endl;
        return;
    }

    currentSize++;
    arr[currentSize]=val;

    for(int i=0; i<=currentSize; i++)
    {
        cout<< arr[i]<< " ";
    }
    cout<<endl;

    ins(arr,currentSize);
}
int main()
{
    int s=9;

    int arr[s]= {0};
    arr[0]=0;

    int currentsize=0;

    cout<< "Enter heap elements: "<<endl;
    for(int i=1; i<s; i++)
    {
        int x;
        cin>>x;
        insertIntoHeap(arr,x,s, currentsize);
    }

    cout<< "Heap Element's are: "<<endl;
    for(int i=1; i<=8; i++)
    {
        cout<< arr[i]<< " ";
    }
    return 0;
}
