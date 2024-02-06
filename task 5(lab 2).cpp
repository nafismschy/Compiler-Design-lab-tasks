#include <iostream>

int main() {
    const int size = 5;
    int arr[size];


    std::cout << "Enter " << size << " integer values for the array:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter value " << i + 1 << ": ";
        std::cin >> arr[i];
    }


    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }


    double average = static_cast<double>(sum) / size;


    std::cout << "Average value: " << average << std::endl;

    return 0;
}

