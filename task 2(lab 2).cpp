#include <iostream>
#include <cctype>

bool isArithmeticOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=';
}

int main() {
    std::string input;


    std::cout << "Enter an expression: ";
    std::getline(std::cin, input);


    std::cout << "Operators in the expression:\n";
    for (char ch : input) {
        if (isArithmeticOperator(ch)) {
            std::cout << "operator: " << ch << "\n";

        }
        

    }

    return 0;
}
