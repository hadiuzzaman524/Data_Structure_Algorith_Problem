#include <iostream>

using namespace std;

int main()
{
    int n=5;
    int weight[n]= {0,3,2,4,1};
    int profit[n]= {0,100,20,60,40};

    int knapSize=5;

    int table[n][knapSize+1];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=knapSize;  j++)
        {
            if(i==0||j==0)
            {
                table[i][j]=0;
            }
            else
            {
                if(weight[i]>j){
                    table[i][j]=table[i-1][j];
                }
                else{
                    table[i][j]=max(table[i-1][j],table[i-1][j-weight[i]]+profit[i]);
                }

            }
        }
    }


    int i=n-1;
    int j=knapSize;
cout<< "Selected Item: "<<endl;
    while(i>0&&j>0){
        if(table[i][j]!=table[i-1][j]){
            cout<< i<< " Weight= " <<weight[i] << " Profit= "<<profit[i]<< endl;
            j=j-weight[i];
            i--;
        }
        else{
            i--;

        }
    }

cout<< "Total profit: "<< table[n-1][knapSize]<<endl;
    return 0;
}
