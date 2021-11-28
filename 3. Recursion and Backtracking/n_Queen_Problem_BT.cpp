#include<iostream>                                             // For doubts see lecture 18.2
using namespace std;

bool isSafe(int** arr, int x, int y, int n){

    for (int row = 0; row < x; row++)
    {
        if (arr[row][y]==1)
        {
            return false;
        }
        
    }

    int row=x, col =y;
    while (row>=0 && col>=0)
    {
        if (arr[row][col]==1)
        {
            return false;
        }
        row--;
        col--;
    }

    row=x, col =y;
    while (row>=0 && col<n)
    {
        if (arr[row][col]==1)
        {
            return false;
        }
        row--;
        col++;
    }
    
    return true;
}

bool nQueen(int** arr, int x, int n){

    if (x>=n)                                     // check if we have placed our nQueens properly, if YES then return true...
    {
        return true;
    }

    for (int col = 0; col <n; col++)
    {
        if (isSafe(arr,x,col,n))                 // Recursive call to function isSafe
        {
            arr[x][col]=1; // If it is safe to place a queen at that position in that specific column then set value of that location to 1.

            if (nQueen(arr, x+1, n))
            {
                return true;
            }
            arr[x][col]=0;                       // If above if statement returns false then we backtrack and set arr[x][col] = 0;
            
        }
        
    }
    return false;                              // If it is not possible to place n Queens in Chess Board of size n*n then return false;
    
}

int main()
{
    int n;
    cin>>n;

    int** arr=new int*[n];                       // Dynamic Memory Allocation in 2-D Array
    for (int i = 0; i < n; i++)
    {
        arr[i]=new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=0;                       // array initiallized to 0
        }
        
    }

    if (nQueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++){
                cout<<arr[i][j]<<" ";
            }cout<<endl;
        }
    }
    

    return 0;
}
