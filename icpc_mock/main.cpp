#include <bits/stdc++.h>

using namespace std;
int main()
{

    int n;
    cin>>n;
    int caseno=1;
    while(n--)
    {
        long long x;
        cin>>x;
        long long ar[x];
        for(long long i=0; i<x; i++)
        {
            cin>>ar[i];
        }

        long long sum=1;

        for(long long i=0; i<x; i++)
        {
            if(x==1)
            {
                sum=ar[i]*ar[i];
            }
            else
                sum=sum*ar[i];
        }

        cout<<"Case "<<caseno++<<": "<<sum<<endl;
    }

    return 0;
}
