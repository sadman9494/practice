#include <iostream>
using namespace std;

int main() {
    int* ptr; // declaring a pointer
    int b;    // declaring a variable
    int a;    // declaring another variable

    ptr = &a; // assigning the address of 'a' to 'ptr'

    cout << ptr << endl;   // Output: Address of 'a' (e.g., 0x61fe10)
    cout << *ptr << endl;  // Output: Value stored at the address pointed by 'ptr' (e.g., 14835856)
    cout << &ptr << endl;  // Output: Address of 'ptr' itself (e.g., 0x61fe18)

    cout << a << endl;     // Output: Value of 'a' (e.g., 14835856)
    cout << &a << endl;    // Output: Address of 'a' (e.g., 0x61fe10)
    cout << &b << endl;    // Output: Address of 'b' (e.g., 0x61fe14)

    return 0;
}