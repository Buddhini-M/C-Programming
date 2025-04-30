#include <iostream>
using namespace std;

int main() {
    int a = 100;
    int& refA = a;

    refA = 560;

    cout << "Value of a: " << a << endl;  // Should show 30
    return 0;
}
