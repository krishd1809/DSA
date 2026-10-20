#include<iostream>
using namespace std;

int main(){
    int arr[]={3,6,8,8,10,12,15,15,15,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int h[arr[n-1]+1]={0};

    for(int i=0;i<n;i++){
        h[arr[i]]++;
    }
    for ( int i=0;i<arr[n-1]+1;i++){
        if(h[i]>1){
            cout<<i<<":"<<h[i]<<" ";
        }
    }




    return 0;
}