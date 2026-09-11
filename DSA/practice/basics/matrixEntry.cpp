#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n,arr[100];
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    cout<<"Enter the array elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array elements entered are : ";
    cout<<"[ ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";


    return 0;
}