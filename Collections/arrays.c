#include <iostream>
#include <cstdlib> // For malloc and free

int main() {
    int size;

    // Ask the user for the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Dynamically allocate an array of integers using malloc
    int *arr = (int*)malloc(size * sizeof(int));

    // Check if memory allocation was successful
    if (arr == nullptr) {
        std::cerr << "Memory allocation failed!" << std::endl;
        return 1; // indicate failure
    }

    // Initialize the array elements
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 10;
    }

    // Display the array elements
    std::cout << "Array elements:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
