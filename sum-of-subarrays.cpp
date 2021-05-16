// Calculate and output the Sum of all Subarrays of an array.
// Ex:- Array = [1,2,2]
// Sum = [1],[1,2],[1,2,2],[2],[2,2],[2]
// Sum = 1,3,5,2,4,2
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<" ";
        }
    }
    return 0;
}