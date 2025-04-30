#include <iostream>
#include <cctype>
#define MIN_LENGTH 8


int main() {
    std::string password;
    std::cout << "Enter password: ";
    std::cin >> password;
    
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    std::string specialChars = "!@#$%^&*";
    
    for (char ch : password) {
        if (isupper(ch)) hasUpper = true;
        else if (islower(ch)) hasLower = true;
        else if (isdigit(ch)) hasDigit = true;
        else if (specialChars.find(ch) != std::string::npos) hasSpecial = true;
    }
    
    if (password.length() >= MIN_LENGTH && hasUpper && hasLower && hasDigit && hasSpecial) {
        std::cout << "Strong Password" << std::endl;

    } else {
        std::cout << "Weak Password: Missing - ";
        if (password.length() < MIN_LENGTH) std::cout << "[Not meet the Minimum Length] ";
        if (!hasUpper) std::cout << "[Uppercase Letter is missing] ";
        if (!hasLower) std::cout << "[Lowercase Letter is missing] ";
        if (!hasDigit) std::cout << "[Please include a Digit] ";
        if (!hasSpecial) std::cout << "[Please include a Special Character] ";
        std::cout << std::endl;
    }
    return 0;
}