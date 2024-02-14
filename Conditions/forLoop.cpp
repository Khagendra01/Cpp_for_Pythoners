#include <iostream>
using namespace std;

int main() {

   for (int i = 0; i < 10; i++){
         cout << i << "hello world" << endl;
    }

    string strArray[] = {"Suman", "Robert",
                 "Krish", "Eminem", "Marshall"};
    int arraySize = sizeof(strArray) / sizeof(strArray[0]); 

    // Iterating over the array using a for loop
    for (int i = 0; i < arraySize; ++i) {
        cout << strArray[i] << endl;
    }
 }
