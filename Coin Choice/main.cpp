#include <iostream>

using namespace std;

int main()
{
    int coin[3]={1,3,5};
    int n=sizeof(coin)/sizeof(int);
    int total=11;

    int minimum[total+1];
    for(int i=0; i<=total; i++)
        minimum[i]=99999;
    minimum[0]=0;

    for(int i=1; i<=total; i++){
        for(int j=0; j<n; j++){
            if(coin[j]<=i){
                int temp=minimum[(i-coin[j])]+1;
                if(minimum[i]>temp){
                    minimum[i]=temp;
                }
            }
        }
    }

    cout<< minimum[total];


    return 0;
}
