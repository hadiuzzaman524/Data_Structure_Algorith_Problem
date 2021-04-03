#include <iostream>
using namespace std;

int marge(int arr[],int temp[],int left,int mid,int right){
    int inv=0;
    int i=left;
    int j=mid;
    int k=left;


    while((i<=mid-1)&& (j<=right)){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            inv+=(mid-i);

        }
    }

    while(i<=mid-1){
        temp[k++]=arr[i++];
    }
    while(j<=right){
        temp[k++]=arr[j++];
    }
    for(int i=left; i<=right; i++){
        arr[i]=temp[i];
    }

    return inv;

}

int margeSort(int arr[],int temp[],int left,int right){

    int inv=0;

    if(left<right){
        int mid=(left+right)/2;
        inv+=margeSort(arr,temp,left,mid);
        inv+=margeSort(arr,temp,mid+1,right);
        inv+=marge(arr,temp,left,mid+1,right);
    }
    return inv;
}

int inventionCount(int arr[],int n)
{

    int temp[n];
    return margeSort(arr,temp,0,n-1);
}


int main()
{
    int n;
    cin>>n;
    while(n--){
        int s;
        cin>>s;

        int ar[s];
        for(int i=0; i<s; i++)
            cin>>ar[i];

        int inv=inventionCount(ar,s);
        cout<<inv<<endl;
    }

    return 0;
}
