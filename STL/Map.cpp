#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int, string> m;

    m[2] = "Pradyumna";
    m[32] = "Abhishek";
    m[1] = "Lokesh";

    m.insert({43,"Kamal"});
    
    cout<<"Before Erase-> "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    cout<<"Find 13 is present or not-> "<<m.count(13)<<endl;

    cout<<"After Erase-> "<<endl; // When we need to erase any element in map we can just provide its Index
    m.erase(m.begin());           // Ex: m.erase(43); this will erase entry with index as 43
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    auto it = m.find(2);
    for (auto i = it; i != m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }cout<<endl;
    

    return 0;
}
