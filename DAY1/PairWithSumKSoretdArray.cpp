#include<iostream>
using namespace std;

int main(){
    
    int arr[]={1,3,4,5,6,8,9,10,12,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout << "Enter Target: ";
    cin >> k;
    int l =0;
    int r =n-1;
    while(l<r){
        if (arr[l]+arr[r]==k){
            cout<< arr[l] <<" "<<arr[r]<<endl;
            l++;
            r--;
            
        }
        else if (arr[l]+arr[r]<k){
            l++;
        }
        else{
            r--;
        }
    }
    return 0;
}