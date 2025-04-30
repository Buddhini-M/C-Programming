#include <iostream>
using namespace std;

int main() {
    int number;

    while (true) {
        cout << "Enter a number: ";
        cin >> number;

        if (number < 0)
            break;
        else if (number == 0)
            continue;
        else
            cout << "Square: " << number * number << endl;
    }

    return 0;
}
