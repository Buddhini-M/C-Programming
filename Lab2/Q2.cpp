#include <iostream>
using namespace std;

void swapwithoutpointerorreference(float a, float b) {
    float temp = a;
    a = b;
    b = temp;
    cout << "After swap (no pointer/ref): a = " << a << ", b = " << b << endl;
}

void swapusingpointers(float* a, float* b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

void swapusingreferences(float& a, float& b) {
    float temp = a;
    a = b;
    b = temp;
}

int main() {
    float a = 5.5, b = 10.5;
    cout << "Original: a = " << a << ", b = " << b << endl;

    swapwithoutpointerorreference(a, b);
    swapusingpointers(&a, &b);
    cout << "After pointer swap: a = " << a << ", b = " << b << endl;

    swapusingreferences(a, b);
    cout << "After reference swap: a = " << a << ", b = " << b << endl;
    return 0;
}

