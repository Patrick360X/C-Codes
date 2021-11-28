// Find the no. of ways in which n friends can remian single or can be paired up.

#include<iostream>
using namespace std;

int pairUp(int n){

    if (n==0 || n==1 || n==2)
    {
        return n;
    }

    return pairUp(n-1) + pairUp(n-2)*(n-1);
        
}

int main()
{
    cout<<pairUp(4)<<endl;
    return 0;
}
