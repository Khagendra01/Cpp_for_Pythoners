#include <iostream>
using namespace std;
// Define an enum named Color with symbolic constants
enum TrafficLightColor {
    RED,    // 0
    GREEN,  // 1
    YELLOW  // 2
};

int main() {
    // Declare a variable of type TrafficLightColor
    TrafficLightColor lightColor = RED;

    // Use the variable
    if (lightColor == RED) {
        cout << "Stop! The traffic light is Red." << std::endl;
    } else if (lightColor == GREEN) {
        cout << "Go! The traffic light is Green." << std::endl;
    } else if (lightColor == YELLOW) {
        cout << "Prepare to stop! The traffic light is Yellow." << std::endl;
    }

    return 0;
}
