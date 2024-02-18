#include <iostream>

// Function to swap two integers using pass by reference
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;

    // Call the swap function, passing x and y by reference
    swap(x, y);

    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    return 0;
}

//print 5, 10
//print 10, 5
