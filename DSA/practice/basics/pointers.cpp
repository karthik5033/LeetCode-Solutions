#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x;   // p stores the address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Pointer p (address of x): " << p << endl;
    cout << "Value at p (*p): " << *p << endl; // dereferencing

    return 0;
}
