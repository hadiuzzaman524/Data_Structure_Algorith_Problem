#include <bits/stdc++.h>

using namespace std;

long long int marge_element(long long arr[],long long temp[],long long low,long long mid,long long high){

    long long int invcount =0;

    long long i=low,j=mid,k=low;

    while((i<=mid-1)&&(j<=high)){

        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;

            invcount += (mid-i);
        }
    }

    while(i<=mid-1){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=high){
        temp[k]=arr[j];
        j++;
        k++;
    }


    for(int i=low; i<=high; i++){
        arr[i]=temp[i];
    }

    return invcount;
}

long long int marge_sort(long long arr[],long long temp[],long long low,long long high){

  long long int countinv=0;

   if(low<high){

       long long mid=(high+low)/2;

       countinv+=marge_sort(arr,temp,low,mid);
       countinv+=marge_sort(arr,temp,mid+1,high);

       countinv+=marge_element(arr,temp,low,mid+1,high);


   }

   return countinv;
}
long long int marge(long long arr[],long long n){

    long long  temparray[n];
     long long low=0;
   long long high=n-1;

    return marge_sort(arr,temparray,low,high);
}

long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    long long int x=marge(arr,N);

    return x;
}


int main()
{
    long long arr[]={4,3,23,44,23};
    int n=sizeof(arr)/sizeof(n);

    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }

    cout<< inversionCount(arr,n);


    return 0;
}
