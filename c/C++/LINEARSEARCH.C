#include <iostream>

int linearSearchRecursive(int arr[], int size, int key) {
    if (size == 0) {
        return -1;
    }
    if (arr[size - 1] == key) {
        return size - 1;
    }
    return linearSearchRecursive(arr, size - 1, key);
}

int main() {
    int arr[100];
    int size, key;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    if (size > 100) {
        std::cout << "Size exceeds maximum limit of 100." << std::endl;
        return 1;
    }

    std::cout << "Enter " << size << " elements:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the value to search for: ";
    std::cin >> key;

    int result = linearSearchRecursive(arr, size, key);

    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}