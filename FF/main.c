#include <stdio.h>
#include <stdlib.h>

long int gcd(long int a,long int b){
 if(a==0){
    return b;
 }
 return gcd(b%a,a);
}


int main()
{
    int n;
    scanf("%d",&n);
    int casen=1;
    long int a,b,m;
    int countp=0;
    while(n--)
    {  scanf("%ld %ld %ld",&a,&b,&m);
        for(long int i=0; i<=m; i++)
        {  if(gcd(a+i,b+i)==1)
            {
                countp++;
            }
        }
        printf("Case %d: %d\n",casen++,countp);
        countp=0;
    }
    return 0;
}
