#include <iostream>


void sumByVal(int a, int b, int sum) {
    sum = a + b;
}

void sumByRef(int &a, int &b, int &sum) {
    sum = a + b;
}

int main() {
    int x = 5;
    int y = 10;
    int sum = 0;

    sumByVal(x, y, sum);

    std::cout << "The Sum by Val " << sum << std::endl;

    sumByRef(x, y, sum);

    std::cout << "The Sum by Ref " << sum << std::endl;

    return 0;
}









































































































