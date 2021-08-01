#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int caseno=1;

    while(t--)
    {
        int n;
        cin>>n;

        string ar[n];

        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        string output;
        cin>>output ;

        int c=0;

        for(int i=0; i<n; i++)
        {

            if(ar[i]==output)
            {
                c+=1;
                break;
            }
            for(int j=0; j<n; j++)
            {
                if(ar[i]+ar[j]==output)
                {
                    c=c+2;
                    break;
                }
            }
        }
        cout<<"Case "<<caseno++<< ": ";
        if(c==0)
        {
            cout<< "impossible"<<endl;
        }
        else
        {
            cout<< c<<endl;
        }
    }
    return 0;
}
