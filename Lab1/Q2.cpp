#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string str;
    std::cout <<"Enter a string: ";  //Take string input from user
    std::getline(std::cin, str);

    //convert the string into uppercase
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    std::cout<< "Uppercase of string: "<< str << std::endl;


    //count the number of vowels in the string
    int Vowelcount = 0;
    for (char v : str){
        if (v == 'A' || v == 'E' || v == 'I' || v == 'O' || v == 'U'){
            Vowelcount++;
        }
    }
    std::cout << "Vowel count: " << Vowelcount << std::endl;

    //Reverse the string
    std::reverse(str.begin(),str.end());
    std::cout << "String in reverse order: "<< str << std::endl;
return 0;
}