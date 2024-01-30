#include <iostream>

int main() {

    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;


    if (number < 0) {
        std::cerr << "Error: Please enter a non-negative integer." << std::endl;
        return 1;
    }


    long long factorial = 1;
    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }


    std::cout << "Factorial of " << number << " = " << factorial << std::endl;

    return 0;
}
