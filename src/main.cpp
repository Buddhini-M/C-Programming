#include <iostream>
#include <string>

//Namespace for MathOperation
namespace MathOperations  {
    int add(int a, int b){
    return a+b;
    }
}

//Namespace for TextOperation
namespace TextOperations {
    std:: string concat(std:: string a, std:: string b){
    return a+b;
    }
}

int main(){
    std::cout <<"Sum of the integers: " << MathOperations::add(39,11) << std::endl;  //Get sum of given 2 integers
    std::string str1 = "Hello";  //Give string 1
    std::string str2 = "World";  //Give string 2
    std::string str3 = str1 + " " + str2;  //Get the concatenated string
    std::cout <<"New String: " << str3 << std::endl; //Get it as an output

    return 0;
}