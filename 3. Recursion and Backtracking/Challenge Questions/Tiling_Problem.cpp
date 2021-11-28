//Given a "2 x n" board and tiles of size "2 x 1", count the no. of ways to tile the given board using these tiles

#include<iostream>
using namespace std;

int tilingWays(int n) {

    if (n==0)
    {
        return 0;
    }
    
    if (n==1)
    {
        return 1;
    }

    return tilingWays(n-1) + tilingWays(n-2);
    
}

int main()
{
    cout<<tilingWays(10)<<endl;
    return 0;
}


// this problem can be mapped with Fibonacci Series