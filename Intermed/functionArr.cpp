#include <iostream>

// Function to process the array
void processArray(const int arr[]) {
    
    arr[0] = 0;
    arr[1] = 0;
    
}

int main() {
    const int SIZE = 5;
    int myArray[SIZE] = {1, 2, 3, 4, 5};

    for (int i = 0; i < SIZE; ++i) {
        std::cout << myArray[i] << " ";
    }
    //prints 1 2 3 4 5
    // Passing the array to the function
    processArray(myArray);

    for (int i = 0; i < SIZE; ++i) {
        std::cout << myArray[i] << " ";
    }
    //print 0 0 3 4 5
    return 0;
}
