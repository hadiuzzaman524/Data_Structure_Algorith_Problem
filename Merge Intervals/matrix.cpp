#include <bits/stdc++.h>

using namespace std;

int main()
{

    int row=2;
    int col=2;
    int A[row][col]=
    {
        {2,4},
        {3,2}
    };

    int B[row][col]=
    {
        {4,2},
        {3,1}
    };

    cout<< "A matrix: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col;  j++)
        {
            cout<< A[i][j]<< " ";
        }
        cout<< endl;
    }

    cout<< "B matrix: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<< B[i][j]<< " ";
        }
        cout<< endl;
    }

    cout<< "Multiplication of A and B: "<<endl;

    int C[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){

            int sum=0;
            for(int k=0; k<col; k++){
             sum=sum+ A[i][k]* B[k][j];
            }
            C[i][j]=sum;
        }
    }
     cout<< "B matrix: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<< C[i][j]<< " ";
        }
        cout<< endl;
    }

    return 0;
}
