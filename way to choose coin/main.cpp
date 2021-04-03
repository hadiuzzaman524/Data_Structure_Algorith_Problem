#include <iostream>

using namespace std;
long long wayOfChooseCoin(long long coin[],long long n,long long sum)
{


        long long table[n][sum+1];
        for(long long i=0; i<n; i++)
            table[i][0]=1;

        for(long long i=0; i<=sum; i++)
        {
            if(i%coin[0]==0)
            {
                table[0][i]=1;
            }
            else
            {
                table[0][i]=0;
            }
        }

        for(long long i=1; i<n; i++)
        {
            for(long long j=0; j<=sum; j++)
            {
                if(coin[i]>j)
                {
                    table[i][j]=table[i-1][j];
                }
                else
                {
                    table[i][j]=table[i-1][j]+table[i][j-coin[i]];
                }
            }
        }

        return table[n-1][sum];
}
int main()
{
    freopen("input.txt","r",stdin);
    long long n;
    long long sum;
    cin>>sum>>n;
    long long coin[n];
    for(long long i=0; i<n; i++)
        cin>>coin[i];

    cout<< wayOfChooseCoin(coin,n,sum);
    return 0;
}
