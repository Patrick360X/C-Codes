#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l;
    l.push_back(4);
    l.push_front(3);
    l.push_back(1);
    l.push_front(6);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.pop_front();
    l.erase(l.begin());
    for(int i: l){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}
