#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int energy_level=100;


    for(int i=0; i<n; i=(i+k)%n)
    {

        energy_level--;
        if(arr[i]==1)
        {
            energy_level-=2;
        }

        if(i==n-k)
            break;

    }
    cout<<energy_level<<endl;
    return 0;
}
