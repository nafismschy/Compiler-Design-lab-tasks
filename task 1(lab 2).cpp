#include <iostream>
#include <cctype>

bool isNumericConstant(const std::string& input) {
    if (input.empty() || (!isdigit(input[0]) && input[0] != '-' && input[0] != '.')) {
        return false;
    }

    bool hasDecimal = false;


    for (size_t i = 1; i < input.size(); ++i) {
        if (!isdigit(input[i])) {
            if (input[i] == '.' && !hasDecimal) {
                hasDecimal = true;
            } else {
                return false;
            }
        }
    }
    return true;
}

int main() {
    std::string input;

    std::cout << "Enter a value: ";
    std::cin >> input;

    if (isNumericConstant(input)) {
        std::cout << "Numeric constant\n";
    } else {
        std::cout << "Not numeric\n";
    }

    return 0;
}
