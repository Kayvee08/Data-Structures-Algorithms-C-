#include<iostream>
using namespace std;
void swap(int *i,int *j){
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
    cout<<"Array before sort\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
    cout<<"\nArray After Sort\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}