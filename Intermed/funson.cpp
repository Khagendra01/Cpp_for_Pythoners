#include <iostream>

int sub(int x, int y);

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 4, num2 = 6;

    int sum = add(num1, num2);
    std::cout << "The sum is: " << sum << std::endl;
    std::cout << "The diff is: " 
              << sub(num1, num2) << std::endl;

    return 0;
}

int sub(int x, int y) {
    return abs(x - y);
}
