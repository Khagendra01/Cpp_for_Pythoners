#include <iostream>
#include <string>

#include "strlib.hpp"

using namespace std;

int main()
{
    cout << "Hello";
    cout << "Hello";
    cout << "Hello";
    cout << "Hello";
    cout << "Enter a string: ";

    string userInput;
    cin >> userInput; // Read a string from cin into userInput

    cout << "You entered: " << userInput << endl;

    return 0;
}
