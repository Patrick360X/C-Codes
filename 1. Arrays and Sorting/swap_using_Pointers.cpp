#include<iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int a = 10;
    int b = 20;

    // int *aptr=&a;
    // int *bptr=&b;

    // swap(aptr, bptr); // (OR)

    swap(&a, &b); // By directly passing address of variable a & b for -> [ Call by Reference ]

    cout<<a<<" "<<b<<endl;

    return 0;

}