#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string> st;
    st.push("Pradyumna");
    st.push("Narendra");
    st.push("Shirude");

    cout<<"Element at Top-> "<<st.top()<<endl;

    st.pop();
    cout<<"Element at Top-> "<<st.top()<<endl;
    st.push("Shirude");
    
    return 0;
}
