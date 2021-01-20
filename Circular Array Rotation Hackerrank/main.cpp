#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    int n,k,q;
    cin>>n>>k>>q;

    int ar[n];
    int index[q];

    for(int i=0; i<n; i++)
        cin>>ar[i];

    for(int i=0; i<q; i++)
        cin>>index[i];


    for(int j=0; j<k; j++)
    {
        int temp;
        temp=ar[n-1];
        for(int i=n-1; i>0; i--)
        {
            ar[i]=ar[i-1];

        }
        ar[0]=temp;
    }

    for(int i=0; i<q; i++)
        cout<< ar[index[i]]<<endl;

    return 0;
}
