#include <iostream>
#include <cmath>
using namespace std;

// Functions
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int multiply(int a, double b, bool flag) {
    double result = a * b;
    return flag ? ceil(result) : floor(result);
}

int main() {
    // A: Multiply two integers
    int int1, int2;
    cout << "Enter two integers to multiply: ";
    cin >> int1 >> int2;
    cout << "Result (int * int): " << multiply(int1, int2) << endl;

    // B: Multiply two doubles
    double double1, double2;
    cout << "\nEnter two doubles to multiply: ";
    cin >> double1 >> double2;
    cout << "Result (double * double): " << multiply(double1, double2) << endl;

    // C: Multiply int and double with a flag
    int intVal;
    double doubleVal;
    char flagInput;
    bool flag;

    cout << "\nEnter an integer and a double: ";
    cin >> intVal >> doubleVal;
    cout << "Enter flag (t for true = ceil, f for false = floor): ";
    cin >> flagInput;
    flag = (flagInput == 't' || flagInput == 'T');

    cout << "Result (int * double with flag): " << multiply(intVal, doubleVal, flag) << endl;

    return 0;
}
