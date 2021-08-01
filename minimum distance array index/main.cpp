#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);

    map<int,int> table;

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }

    for(int i=0; i<n; i++)
    {
        table[arr[i]]=-1;
    }

    int minimum=99999;

    for(int i=0; i<n; i++)
    {
        if( table[arr[i]]!=-1)
        {
            table[arr[i]]=(i-table[arr[i]]);
            if(minimum>table[arr[i]])
            {
                minimum=table[arr[i]];
            }
        }

        else
        {
            table[arr[i]]=i;
        }

    }
    if(minimum==99999){
        cout<< -1<<endl;
    }else
    cout<<minimum<<endl;

    table.clear();

    return 0;
}
