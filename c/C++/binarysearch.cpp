#include <iostream>
#include <algorithm>

int binarySearchRecursive(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == key) {
        return mid;
    }

    if (arr[mid] > key) {
        return binarySearchRecursive(arr, low, mid - 1, key);
    }

    return binarySearchRecursive(arr, mid + 1, high, key);
}

int main() {
    int arr[100];
    int size, key;
    std::cout << "Enter the number of elements (max 100): ";
    std::cin >> size;

    if (size > 100 || size <= 0) {
        std::cout << "Invalid size. Please enter a value between 1 and 100." << std::endl;
        return 1;
    }

    std::cout << "Enter " << size << " elements:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    std::cout << "The array will be sorted for binary search." << std::endl;
    std::sort(arr, arr + size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Enter the value to search for: ";
    std::cin >> key;

    int result = binarySearchRecursive(arr, 0, size - 1, key);

    if (result != -1) {
        std::cout << "Element found at index " << result << " in the sorted array." << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}
