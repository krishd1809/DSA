#include<iostream>
using namespace std;

int main(){

    int arr[]={3,6,8,8,10,12,15,15,15,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int last_duplicate=0;
    for(int i=0 ;i<n;i++){
        if (arr[i]==arr[i+1] && arr[i]!=last_duplicate){
            cout<<arr[i]<<" ";
            last_duplicate=arr[i];
        }
    } 
    return 0;

}