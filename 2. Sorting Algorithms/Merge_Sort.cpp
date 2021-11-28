#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){

    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1];
    int b[n2];          // temp arrays are needed in this case as we cannot continue with the same array as we need to perform comparison between elements of both the sorted arrays

    for (int i = 0; i < n1; i++)
    {
        a[i]=arr[l+i];
    }
    
    for (int i = 0; i < n2; i++)
    {
        b[i]=arr[mid+1+i];
    }

    int i=0,j=0;
    int k=l;

    while (i<n1 && j<n2)
    {
        if (a[i]<b[j])
        {
            arr[k] = a[i];
            k++; i++;
        }
        else{
            arr[k] = b[j];
            k++; j++;
        }
        
    }
    
    while (i<n1)
    {
        arr[k] = a[i];
        k++; i++;
    }
    
    while (j<n2)
    {
        arr[k] = b[j];
        k++; j++;
    }

}

void mergeSort(int arr[], int l, int r){

    if (l<r)
    {
        int mid = (l+r)/2;
        mergeSort(arr, l , mid);
        mergeSort(arr, mid+1, r);

        merge(arr, l, mid, r);
    }
    
}

int main()
{
    int arr[] = {4,2,5,7,1,6,8,3,9};
    mergeSort(arr,0,8);

    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
   
}

/*       RECURRENCE RELATION

T(n) = 2T (n/2) + n

For n = n/2;

T(n/2) = 2T(n/4) + n/2
T(n/4) = 2T(n/8) + n/4
...
...
...

T(1) = 1

LEVELS: 

n/2^k = 1
n = 2^k
k = Log n

T(n) = n + n + n + ... Log n times

Therefore Time Complexity T(n) = nLogn.
*/