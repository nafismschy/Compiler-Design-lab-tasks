#include <iostream>
#include <climits>

int main() {

    int arr[] = {6, 3, 9, 2, 4};


    int size = sizeof(arr) / sizeof(arr[0]);


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
