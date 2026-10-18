#include<iostream>
using namespace std;

int main() {
    int arr[]={6,7,8,9,10,11,13,14,15,16};
    int l=sizeof(arr)/sizeof(arr[0]);
    int dif=arr[0]-0;
    int result=0;
    for(int i=0;i<l;i++){
        if(arr[i]-i !=dif){
            result=i+dif;
            break;
        }

    }
    
    cout<< result;
    return 0;
}