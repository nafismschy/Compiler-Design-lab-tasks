#include <iostream>
#include <cctype>

bool isIdentifier(const std::string& input) {

    if (input.empty()) {
        return false;
    }


    if (!isalpha(input[0]) && input[0] != '_') {
        return false;
    }


    for (size_t i = 1; i < input.size(); ++i) {
        if (!isalnum(input[i]) && input[i] != '_') {
            return false;
        }
    }

    return true;
}

int main() {
    std::string input;


    std::cout << "Enter an identifier: ";
    std::cin >> input;


    if (isIdentifier(input)) {
        std::cout << "Identifier\n";
    } else {
        std::cout << "Not an identifier\n";
    }

    return 0;
}

