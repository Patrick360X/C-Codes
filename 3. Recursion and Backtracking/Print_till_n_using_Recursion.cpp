#include<iostream>
using namespace std;

void decreasing(int n) {

    if (n==0)
    {
        return;
    }
    
    cout<<n<<"\t";
    decreasing(n-1);

    cout<<"\n";
}

void increasing(int n) {

    if (n==1)
    {
        cout<<"1"<<"\t";
        return;
    }
    
    increasing(n-1);
    cout<<n<<"\t";

}

int main() {

    int n;
    cin>>n;

    decreasing(n);
    increasing(n);

    return 0;
}