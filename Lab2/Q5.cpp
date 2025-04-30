#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 4, 7, 10, 15};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[5];

    int* ptr = arr1 + size - 1;
    for(int i = 0; i < size; i++) {
        arr2[i] = *ptr;
        ptr--;
    }

    cout << "Reversed array: ";
    for(int i = 0; i < size; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
