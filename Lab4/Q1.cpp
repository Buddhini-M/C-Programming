#include <iostream>
using namespace std;

class Complex {
    double real, imag;

public:
    Complex(double r = 0.0, double i = 0.0) {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(const Complex &c) {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator/(const Complex &c) {
        double denom = c.real * c.real + c.imag * c.imag;
        double r = (real * c.real + imag * c.imag) / denom;
        double i = (imag * c.real - real * c.imag) / denom;
        return Complex(r, i);
    }

    friend ostream& operator<<(ostream &out, const Complex &c);
};

ostream& operator<<(ostream &out, const Complex &c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

int main() {
    Complex c1(4, 5), c2(2, -3);
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "Sum = " << c1 + c2 << endl;
    cout << "Difference = " << c1 - c2 << endl;
    cout << "Quotient = " << c1 / c2 << endl;
    return 0;
}