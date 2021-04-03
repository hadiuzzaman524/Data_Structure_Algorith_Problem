#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int n,k,q;
    cin>>n;
    cin>>k;
    cin>>q;
    int ar[n];
    for(int i=0; i<n; i++)
        cin>>ar[i];
    int index[q];
    for(int i=0; i<q; i++)
        cin>>index[i];


    int ar2[n];
    int m=0;
    for(int i=0; i<n; i++)
        ar2[m++]= ar[(i+k-1)%n];

    for(int i=0; i<n; i++)
        cout<< ar2[index[i]]<<endl;
    return 0;
}
