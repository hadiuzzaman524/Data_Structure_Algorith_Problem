#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];


    int c=0;

    int i=0;
    while(i<n-1)
    {
        if(i<n-1&&a[i+2]==0)
            i++;
        c++;
        i++;

    }
    cout<< c<< " "<<endl;
    return 0;
}
