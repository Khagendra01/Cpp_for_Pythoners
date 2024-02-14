 #include <iostream>
 using namespace std;

 int main() {

    int a[] = {25, 50, 75, 100};
    cout << a[0] << '\n';

    int size;

    // Ask the user for the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Dynamically allocate an array of integers
    int *arr = new int[size];

    // Check if memory allocation was successful
    if (arr == nullptr) {
        std::cerr << "Memory allocation failed!" << std::endl;
        return 1; // indicate failure
    }

    // Initialize the array elements
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 10;
    }

    delete[] arr;


    return 0;
} 