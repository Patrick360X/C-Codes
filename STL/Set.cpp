#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> s;

    s.insert(4);
    s.insert(9);
    s.insert(9);
    s.insert(9);
    s.insert(2);
    s.insert(7);
    s.insert(7);
    s.insert(5);

    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    cout<<"After Erase-> "<<endl;

    s.erase(s.begin());
    for(auto i:s){
        cout<<i<<endl;
    }

    //Incase we need to delete an element from begininig using iterator

    cout<<"To Erase an element-> "<<endl;
    set<int>:: iterator it = s.begin();
    it++; 

    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    // Count function tells us if the element is present or not

    cout<<"9 is present or not-> "<<s.count(9)<<endl;

    set<int>::iterator itr = s.find(4);
    
    for (auto it = itr; it != s.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;
    

    return 0;
}
