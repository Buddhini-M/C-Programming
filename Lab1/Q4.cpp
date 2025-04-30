#include <iostream>
#define SQUARE(x) ((x) * (x))  //Define the macro to calculae square

int main(){
    int num;
    std::cout<< "Enter a integer: ";  //Ask for a integer from user
    std::cin>> num;
    std::cout << "Square of the entered integer is: " << SQUARE(num) << std::endl;  //Give the square value as output
    return 0;
}