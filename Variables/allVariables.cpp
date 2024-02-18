
#include <iostream>
#include <string>

class Student {
    
  public:
    int roll_no;
    std:: string name;
    float marks;
    static float passing_grade;
};

void local() {
 int a = 50, b = 80;
 std::cout << " a = " << a << " and b = " << b << std::endl;
 //prints a = 50 and b = 80
}

int main() {

 int a = 22, b = 44;
 local();
 std::cout << " a = " << a << " and b = " << b << std::endl;
 //prints a = 22 and b = 44

 auto trading_Ticker = "Spy";

 Student obj; //object of Student class

 return 0;
} 
