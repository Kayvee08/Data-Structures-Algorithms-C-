// Write a program to find an unique number in an array where all the numbers(except one) are present twice.

// EX:- {1,2,3,4,1,2,3}
// OUTPUT:- 4

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int xorsum= 0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    cout<<xorsum;
    return 0;
}