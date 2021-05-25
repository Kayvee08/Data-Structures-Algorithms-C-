//KADANE'S ALGORITHM BASED PROBLEM


//WORKS FOR ARRAYS WITH ALL NEGATIVE NUMBERS

#include<iostream>
using namespace std;
#define INT_MIN (-2147483647 - 1)
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxSum = a[0];
    int sum=a[0];
    for(int i=1;i<n;i++){
        sum = max(a[i], sum+a[i]);
        maxSum = max(sum,maxSum);
    }
    cout<<maxSum<<endl;
    return 0;
}