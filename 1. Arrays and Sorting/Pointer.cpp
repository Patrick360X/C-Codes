#include<iostream>

using namespace std;

int main() {

    int a = 10;
    int *aptr = &a;

    cout<<aptr<<endl;  // prints address on which a variable is stored 
    cout<<*aptr<<endl;  // prints value at that address location
    cout<<&a<<endl;     // prints address at which a is present

    // We can Update the value of variable a using pointers

    *aptr = 20;
    cout<< a <<endl; 

    // Pointer arithmetic

    aptr++;
    cout<<aptr<<endl; // prints address on which a variable is stored
    cout<<*aptr<<endl; // prints garbage value at that address location

    // Pointer & Arrays

    int arr[] = {10,20,30};
    cout << *arr<< endl; // prints element at the 0th location in that specified Array

    // int *ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        // By incrementing ptr we can traverse through the array

        // cout<<*ptr<<"\t";
        // ptr++;

        //arr++; // Illegal as arr is a constant pointer which we can't increment like this

        cout<<*(arr+i)<<"\t";
    }
    cout<<endl;

    //Pointer to Pointer

    int x = 10;
    int *y;
    y=&x;

    cout<<*y<<endl;      // 10

    int **z = &y;
    
    cout<<*z<<endl;     //address at which y is stored because odf single de referencing
    cout<<**z<<endl;    //value of x i.e 10 because it is double de-Referencing
    
    return 0;
}