#include<iostream>
using namespace std;

void Reverse (string s) {

    if (s.length()==0)
    {
        return;                             // base condition
    }

    string ros = s.substr(1);               // ros -> rest of string & substr is built-in STL that returns every thing after 'i' th Element in string...
    Reverse(ros);

    cout<<s[0]<<"\t";
}

int main() {

    Reverse("binod");
    return 0;

}