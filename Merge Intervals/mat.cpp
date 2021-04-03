#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("jorina.txt", "r", stdin);

    int r1,c1;
    int r2,c2;
    cout<< "How many rows and columns for A? ";
    cin>> r1>> c1;

    int A[r1][c1];

    cout<< "Please enter the value "<<endl;

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cin>> A[i][j];
        }
    }

    cout<< "How many row and columns for B? ";
    cin>> r2>> c2;

    int B[r2][c2];

    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cin>> B[i][j];
        }
    }


    cout<< "Matrix A: "<<endl;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cout<< A[i][j]<< " ";
        }
        cout<<endl;
    }

    cout<< "Matrix B: "<<endl;
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cout<< B[i][j]<< " ";
        }
        cout<<endl;
    }

    /*
    0 && 1= 0
    0 && 0= 0
    1 && 0= 0
    1 && 1= 1

    */
    if(r1==r2&&c1==c2)  // 2 4
    {
        int result[r1][c1];

        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c1; j++)
            {
                result[i][j]=A[i][j]+B[i][j];
            }
        }

        cout<< "Matrix Result: "<<endl;
        for(int i=0; i<r2; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cout<< result[i][j]<< " ";
            }
            cout<<endl;
        }
        // 2 4

    }
    else
    {
        cout<< "Enter valid matrix"<<endl;
    }

    if(c1==r2)
    {


        int multi[r1][c2];

        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {

                int sum=0;

                for(int k=0; k<c2; k++)
                {
                    sum+=A[i][k]* B[k][j];
                }
                multi[i][j]=sum;
            }
        }


        cout<< "The multiplication is: "<<endl;
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cout<< multi[i][j]<< " ";
            }
            cout<<endl;
        }


    }



    return 0;
}
