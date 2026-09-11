#include<iostream>
using namespace std;
int main(){
    int b,a=10;
    int &r=a;
    // Reference is just another name to the variable
    // here a and r are same
    b=r;
    // refernce doesnt consume memory....it has the same memory as "a"
    cout<<r<<endl;
    cout<<b;
    return 0;
}