#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter Number: ";
    cin>>n;
    for(int i=1;i<n+1;i++){
        char ch='A';
        for(int j=1;j<n+1;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}