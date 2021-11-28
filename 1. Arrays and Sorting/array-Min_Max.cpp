#include<iostream>
#include<climits>

using namespace std;

int main() {

    int n;
    cout<< "Enter no. of Elements"<<endl;
    cin>>n;

    int array[n];
	
	cout<<"Enter Elements of Array:"<<endl;
	
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    int minNo=INT_MAX;
    int maxNo=INT_MIN;

    for(int i=0;i<n;i++){
        if(array[i]<minNo){
            minNo = array[i];
        }
        if(array[i]>maxNo){
            maxNo = array[i];
        }
    }
    
    cout<<"Minimum No. is: "<< minNo<<endl;
    cout<<"Maximum No. is "<< maxNo<<endl;

    return 0;
}