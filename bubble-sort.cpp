#include<iostream>
using namespace std;
void swap(int *i, int *j){
    int k;
    k=*i;
    *i=*j;
    *j=k;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array Before Sort\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"\nArray After Swap\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}