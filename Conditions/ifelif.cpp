#include <iostream>
using namespace std;

int main() {

    double gpa = 3.6;

    if (gpa >= 3.8) {
        cout << "Full Scholarship" << endl;
    }
    else if (gpa < 3.8 && gpa >= 3.6) {
        cout << "Half Scholarship" << endl;
    }
    else {
        cout << "No Scholarship" << endl;
    }

    return 0;
}
