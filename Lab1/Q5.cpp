#include <iostream>

int main(){
    int num, sum=0;
    std::cout<<"Enter a number: ";  //Ask from the user to enter a number
    std::cin>> num;

    for (; num > 0; num /= 10) {    //loop conditions to add each digit
        sum += num % 10;
    }
    std::cout << "Sum of digits of the number: " << sum << std::endl;
    return 0;
}