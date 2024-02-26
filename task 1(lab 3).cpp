#include <iostream>
#include <string>

bool isIdentifier(const std::string& input) {
    if (input.empty()) {
        return false;
    }


    if (!((input[0] >= 'a' && input[0] <= 'z') ||
          (input[0] >= 'A' && input[0] <= 'Z') ||
          input[0] == '_')) {
        return false;
    }


    for (size_t i = 1; i < input.size(); ++i) {
        if (!((input[i] >= 'a' && input[i] <= 'z') ||
              (input[i] >= 'A' && input[i] <= 'Z') ||
              (input[i] >= '0' && input[i] <= '9') ||
              input[i] == '_')) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string input;

    std::cout << "Enter a potential identifier: ";
    std::cin >> input;

    if (isIdentifier(input)) {
        std::cout << input << " is a valid identifier.\n";
    } else {
        std::cout << input << " is not a valid identifier.\n";
    }

    return 0;
}
