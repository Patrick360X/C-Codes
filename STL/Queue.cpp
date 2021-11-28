#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<string> q;

    q.push("Shirude");
    q.push("Pradyumna");
    q.push("Narendra");

    cout<<"Element at Front-> "<<q.front()<<endl;
    q.pop();
    cout<<"Element at Front-> "<<q.front()<<endl;

    cout<<"Size of Queue-> "<<q.size()<<endl;
    return 0;
}
