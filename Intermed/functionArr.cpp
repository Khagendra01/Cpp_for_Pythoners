#include <iostream>

// Function to process the array
void processArray(int arr[]) {
    
    arr[0] = 0;
    arr[1] = 0;
    
}

int main() {
    const int SIZE = 5;
    int myArray[SIZE] = {1, 2, 3, 4, 5};

    for (int i = 0; i < SIZE; ++i) {
        std::cout << myArray[i] << " ";
    }

    // Passing the array to the function
    processArray(myArray);

    for (int i = 0; i < SIZE; ++i) {
        std::cout << myArray[i] << " ";
    }

    return 0;
}
