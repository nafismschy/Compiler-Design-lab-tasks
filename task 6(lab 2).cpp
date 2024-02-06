#include <iostream>
#include <climits>

int main() {
    const int size = 2;
    int arr[size];


    std::cout << "Enter " << size << " integer values for the array:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter value " << i + 1 << ": ";
        std::cin >> arr[i];
    }


    int minVal = arr[0];
    int maxVal = arr[0];


    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }


    std::cout << "Minimum value: " << minVal << std::endl;
    std::cout << "Maximum value: " << maxVal << std::endl;

    return 0;
}

