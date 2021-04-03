#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        int b;
        cin>>a>>b;

        int ar=sqrt(a);
        int br=sqrt(b);

        int c=0;
        for(int i=ar; i<=br; i++)
        {
            if(pow(i,2)>=a && pow(i,2)<=b)
                c++;
        }

        cout<<c<<endl;
    }

    return 0;
}
