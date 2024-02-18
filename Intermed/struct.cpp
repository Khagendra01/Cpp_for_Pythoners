#include <iostream>
#include <string>

using namespace std;


struct Student {
    string name;
    int rollNumber;
    int age;
};

int main() {

    Student student1, student2;

    student1.name = "Halie";
    student1.rollNumber = 11;
    student1.age = 28;

    student2.name = "Laine";
    student2.rollNumber = 12;
    student2.age = 21;

    cout << "Student Name: " << student1.name << endl;
    cout << "Roll Number: " << student1.rollNumber << endl;
    cout << "Age: " << student1.age << endl;

    return 0;
}

