#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;

    vector<int> a(5,1);
    vector<int> last(a);                         // Used to copy all elements of a in last vector

    cout<<"Print Last Vector-> "<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Capacity of vector-> "<<v.capacity()<<endl;
    v.push_back(1);
    v.push_back(2);
    cout<<"Capacity of vector-> "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity of vector-> "<<v.capacity()<<endl;
    cout<<"Size of Vector-> "<<v.size()<<endl;

    cout<<"Before Pop"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    return 0;
}
