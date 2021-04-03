#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);

    string str;
    cin>>str;
    // fflush(stdin);
    int n;
    cin>>n;

    string x="";

    while(x.size()<n)
    {
        long long i=0;
        while(i<str.size())
        {
            x+=str[i];
            i++;
        }
    }

    cout<< x<<endl;
    return 0;
}
