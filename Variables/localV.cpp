
#include <iostream>

void local();

int main() {
 int a = 22, b = 44;
 local();
 std::cout << " a = " << a << " and b = " << b << std::endl;
 //prints a = 22 and b = 44
 return 0;
}

void local() {
 int a = 50, b = 80;
 std::cout << " a = " << a << " and b = " << b << std::endl;
 //prints a = 50 and b = 80
}
 