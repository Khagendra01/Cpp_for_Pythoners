#include <iostream>
#include <string>
using namespace std;

// Define a class called 'Person'
class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Method to display information about the person
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create an object of the class 'Person'
    Person person1("Brian", 30);

    // Create a pointer to a 'Person' object and allocate memory
    Person* person2_ptr = new Person("Alice", 25);

    // Call the method to display information about the persons
    person1.displayInfo();
    person2_ptr->displayInfo(); // Accessing member function using pointer

    // Deallocate memory to avoid memory leaks
    delete person2_ptr;

    return 0;
}
