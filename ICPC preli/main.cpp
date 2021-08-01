#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n)
{
    int maxending=0;
    int maxsum=0;

    for(int i=0; i<n; i++)
    {
        maxending+=arr[i];

        if(maxending<0)
            maxending=0;
        if(maxsum<maxending)
            maxsum=maxending;
    }
    return maxsum;

}

int maximum=0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    scanf("%d",&t);
    int caseno=1;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int ar[n];
        for(int i=0; i<n; i++)
            scanf("%d",&ar[i]);
        int c=0;

        map<int,int> flag;
        for(int i=0; i<n; i++)
        {
            maximum=max(maxSubarraySum(ar,n),maximum);
            for(int j=i+1; j<n; j++)
            {
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
                if(maximum<=max(maxSubarraySum(ar,n),maximum))
                {
                    flag[maximum]++;

                }
                maximum=max(maxSubarraySum(ar,n),maximum);
            }
        }
        map<int,int>:: iterator it;

        for(it=flag.begin(); it!=flag.end(); it++)
        {
            if(it->first!=maximum)
            {
                c+=it->second;
            }
        }
        printf("Case %d: %d %d\n",caseno++,maximum,c);
        maximum=0;
        c=0;
        flag.clear();
    }
    return 0;
}
