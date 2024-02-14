#include <iostream>

int main() {

    int choice = 5;
    
    switch (choice) {
        case  1:
            std::cout << "Chicken Sandwich" << std::endl;
            break;
        case  2:
            std::cout << "Chicken Rice Bowl" << std::endl;
            break;
        case  3:
            std::cout << "Beef and Brocoli" << std::endl;
            break;
        default:
            std::cout << "Daal Bhaat" << std::endl;
    }

    return  0;
}
