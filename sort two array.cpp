#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[]={1,3,5,7};
    int arr2[]={0,2,6,8,9};

    int n1=sizeof(arr1)/sizeof(int);
    int n2=sizeof(arr2)/sizeof(int);
    vector<int>newar;

    int i=0, j=0;

    while(i<n1&&j<n2){

        if(arr1[i]<arr2[j]){
            newar.push_back(arr1[i]);
            i++;
        }
        else {
            newar.push_back(arr2[j]);
            j++;
        }
    }

    while(i<n1){
        newar.push_back(arr1[i]);
        i++;
    }

    while(j<n2){
        newar.push_back(arr2[j]);
        j++;
    }

    for(int i=0; i<newar.size(); i++){
        cout<< newar[i]<< " ";
    }
    cout<<endl;
    return 0;
}
