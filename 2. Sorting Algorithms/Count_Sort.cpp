/* 

1. Find the count of every distinct element in the array.
2. Calculate the position of each element in Sorted Array.

*/

#include<iostream>
using namespace std;

void countSort(int arr[], int n){

    int k = arr[0];

    for (int i = 0; i < n; i++)
    {
        k = max(k,arr[i]);
    }
    
    int count[10] = {0};

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    
    for (int i = 1; i <= k; i++)                  // For getting cumulative sum of Elements position in count array
    {
        count[i] += count[i-1];
    }
    
    int output[n];
    for (int i = n-1; i >= 0 ; i--)   // Firstly decrementing the count value of element from count array and storing it in final Output Array.
    {
        output[--count[arr[i]]] = arr[i];
    }
    
    for (int i = 0; i < n; i++)               //Final Output array              
    {
        arr[i] = output[i];
    }

}

int main()
{
    int arr[] = {1,3,2,3,4,1,6,4,3};

    countSort(arr,9);

    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

/*  COUNT SORT COMPLEXITY

1. First we create an array of appropriate range, Time: O(max(Ai))
2. Fill the frequencies of each element. Time: O(N)
3. Iterate the frequency array. Time: O(max(Ai))

Final Time Complexity : max(Ai, N)

*/