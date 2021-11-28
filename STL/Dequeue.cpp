#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.push_back(5);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    
    d.pop_back();

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<"Element at 2nd Index is-> "<<d.at(2)<<endl;

    cout<<"Before Erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+2);
    cout<<"After Erase "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}
