#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);

    string str;
    getline(cin,str);
    int n;
    cin>>n;

    int queries[n];
    for(int i=0; i<n; i++)
        cin>>queries[i];


    map<char,int> weight=
    {
        {'a',1},{'b',2},{'c',3},{'d',4},{'e',5},{'f',6},{'g',7},{'h',8},{'i',9},
        {'j',10},{'k',11},{'l',12},{'m',13},{'n',14},{'o',15},{'p',16},{'q',17},{'r',18},
        {'s',19},{'t',20},{'u',21},{'v',22},{'w',23},{'x',24},{'y',25},{'z',26},
    };
    map<char,int>::iterator it;
    vector<int> result;




    char temp=str[0];
    string news="";
    news+=temp;

    for(int i=1; i<=str.size(); i++)
    {
        int w=0;
        for(it=weight.begin(); it!=weight.end(); it++)
        {
            for(int k=0; k<news.size(); k++)
            {
                if(news[k]==it->first)
                {
                    w+= it->second;
                }
            }

        }

        result.push_back(w);
        if(temp==str[i])
        {
            news+=str[i];
            temp=str[i];
        }
        else
        {
            news="";
            news=str[i];
            temp=str[i];
        }
    }



    for(int i=0; i<n; i++)
    {
        bool flag=false;
        for(int j=0; j<result.size(); j++)
        {
            if(queries[i]==result[j])
            {
                flag=true;
            }

        }
        if(flag)
        {
            cout<< "Yes"<<endl;
        }
        else
        {
            cout<< "No"<<endl;
        }


    }
    result.clear();
    weight.clear();

    return 0;
}
