#include <iostream>

int main() {
    int num, reversed = 0;
    std::cout << "Enter a number: ";  //Ask from the user to enter a number
    std::cin >> num;

    for (; num > 0; num /= 10) {     //loop conditions to reverse order each digit
        reversed = reversed * 10 + num % 10;
    }
    std::cout << "Reverse number: " << reversed << std::endl;
    return 0;
}