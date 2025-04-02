#include <iostream>
#include <string>

namespace A {
    void display() {
        std::cout <<"Sum of the integers: " << sum << std::endl;
    }
}

naespace B {
    void display() {
        std::cout <<"New String: " << str3 << std::endl;
    }
}

int main(){
    std::int i1= 39;
    std::int i2= 11;
    std::int sum = i1+i2;
    A::display();

    std::string str1= "Hello";
    std::string str2= "World";
    std::string str3= str1 + " " + str2;
    B::display();

    return 0;
}