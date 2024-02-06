#include <iostream>
#include <string>

int main() {
    std::string firstName, lastName;


    std::cout << "Enter your first name: ";
    std::getline(std::cin, firstName);


    std::cout << "Enter your last name: ";
    std::getline(std::cin, lastName);


    std::string fullName = firstName + " " + lastName;


    std::cout << "Full name: " << fullName << std::endl;

    return 0;
}

