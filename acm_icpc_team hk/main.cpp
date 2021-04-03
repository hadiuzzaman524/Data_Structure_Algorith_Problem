#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int n;
    int m;
    cin>>n>>m;

    string ar[n];

    for(int i=0; i<n; i++)
        cin>>ar[i];


    int maximum=0;
    vector<int> v;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int c=0;
            for(int k=0; k<m; k++)
            {
                if(ar[i][k]=='1' || ar[j][k]=='1')
                {
                    c++;
                }
            }
            if(maximum<c)
            {
                maximum=c;
            }
            v.push_back(c);

        }
    }

    int team=0;
    for(int i=0; i<v.size(); i++)
    {
        if(maximum==v[i])
            team++;
    }
    v.clear();
    cout<< maximum<<endl;
    cout<< team<<endl;

    return 0;
}
