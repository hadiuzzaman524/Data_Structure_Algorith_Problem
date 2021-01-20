#include <iostream>

using namespace std;

int main()
{
    string str1; //="hackerhappy";
    string str2;//="hackerrank";
    int k;
    cin>>str1;
    cin>>str2;
    cin>>k;

    int len1=str1.size();
    int len2=str2.size();


    int lastindx=1;

    for(int i=0; i<len2; i++)
    {
        if(str1[i]==str2[i])
            lastindx=i;
        else
            break;
    }

    string last="";
    for(int i=lastindx+1; i<len1; i++)
    {
        last+=str1[i];
    }
    string secondlast="";
    for(int i=lastindx+1; i<len2; i++)
    {
        secondlast+=str2[i];
    }

    int op=last.size()+secondlast.size();
    if(len1+len2<=k)
    {
        cout<< "Yes"<<endl;
    }
    else if(op<=k&&(k-op)%2==0)
    {
        cout<< "Yes"<<endl;
    }
    else
        cout<< "No"<<endl;

    cout<< 0%2;

    // cout<< lastindx;
    return 0;
}
