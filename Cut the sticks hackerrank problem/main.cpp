#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input2.txt","r",stdin);
    int n;
    cin>>n;
    vector<int> temp;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        temp.push_back(a);
    }

    sort(temp.begin(),temp.end(),greater<int>());

    while(!temp.empty())
    {
        cout<< temp.size()<<endl;

        for(int i=0; i<temp.size(); i++)
        {
            temp[i]-=temp[temp.size()-1];
        }

        while(temp.back()==0&&!temp.empty())
        {
            temp.pop_back();
        }
    }
    return 0;
}
