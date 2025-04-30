#include <iostream>
using namespace std;

int main() {
    int x = 100;
    int* p1 = &x;  // Pointer 1 points to x
    int* p2 = p1;  // Pointer 2 copies address (shallow copy) 

    *p1 = 300;

    cout << "Value via p2: " << *p2 << endl;  // Should reflect the change
    return 0;
}
