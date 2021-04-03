#include <iostream>

using namespace std;

int main()
{
    /*
    0 1 2 3 4
    3 4 6 7 8
    33 44 5 6 7
    3 4 5 6 7
    2 3 4 6 7
    */
    int row=3;
    int col=3;



    int mat1[row][col]={
    {1,1,1},
    {2,2,2},
    {3,3,3}
    };

    int mat2[row][col]={
    {1,1,1},
    {2,2,2},
    {3,3,3}
    };

    int result[row][col];

    for(int i=0; i<row; i++){

        for(int j=0; j<col; j++){

            result[i][j]=mat1[i][j]+mat2[i][j];
        }

    }

    cout<< "Result matrix: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<< result[i][j]<< " ";
        }
        cout<< endl;
    }


    return 0;
}
