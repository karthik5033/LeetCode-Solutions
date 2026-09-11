#include<iostream>
using namespace std;
int main(){
    int x=10;
    int const *p =&x;
    cout<<p;
    cout<<*p;
}