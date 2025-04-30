#include <iostream>

int main(){
int num = 12;
int*ptr= &num;

std::cout << "Value of num:" << num<< std::endl;
std::cout << "Address of num:" << &num<< std::endl;
std::cout << "Value stored in ptr:" << ptr<< std::endl;
std::cout << "Value pointed by ptr:" << *ptr<< std::endl;
}
