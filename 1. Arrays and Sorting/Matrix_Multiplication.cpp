// Given two 2-D arrays of Sizes n1*n2 & n2*n3. Your task is to multiply these matrices and output the multiplied matrix of size n1*n3.

//Approach

// 1. Make a nested loop of order 3. In the outer loop iterate over rows of first matrix and in the inner loop iterate over columns of Second matrix.
// 2. Multiply rows of 1st matrix with the column of 2nd matrix in the innermost loop and update in the answer matrix.

#include<iostream>

using namespace std;

int main() {

    int n1, n2, n3;
    cout<<"Enter Value of n1, n2, n3:"<<endl;
    cin >> n1>> n2>> n3;

    int m1[n1][n2];
    int m2[n2][n3];

    cout<<"Enter 1st Matrix Elements:"<<endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin>> m1[i][j];
        }
        
    }

    cout<<"Enter 2nd Matrix Elements:"<<endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin>> m2[i][j];
        }
        
    }

    int ans[n1][n3];
    
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
        
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += m1[i][k] * m2[k][j];
            }
            
        }
        
    }

    cout<<"Multiplied Matrix:"<<endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout<< ans[i][j] << " ";
        }
        cout<< "\n";
    }
    
    

    return 0;

}