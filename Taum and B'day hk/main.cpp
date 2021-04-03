#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    while(n--)
    {
        int b,w,bc,wc,z;
        cin>>b>>w;
        cin>> bc>>wc>>z;

        int blackmin=min(bc, (wc+z));
        int whitemin=min(wc, (bc+z));

        cout<< (b*blackmin)+(w*whitemin)<<endl;
    }
    return 0;
}
