#include <iostream>

namespace cst {

    class String {

    private:
        char* data;
        int length;

    public:
        // Constructors
        String() : data(nullptr), length(0) {}
        String(const char* str) {
            length = 0;
            while (str[length] != '\0') {
                ++length;
            }
            data = new char[length + 1];
            for (int i = 0; i <= length; ++i) {
                data[i] = str[i];
            }
        }

        // Destructor
        ~String() {
            delete[] data;
        }

        // Copy constructor
        String(const String& other) {
            length = other.length;
            data = new char[length + 1];
            for (int i = 0; i <= length; ++i) {
                data[i] = other.data[i];
            }
        }

        // Assignment operator
        String& operator=(const String& other) {
            if (this != &other) {
                delete[] data;
                length = other.length;
                data = new char[length + 1];
                for (int i = 0; i <= length; ++i) {
                    data[i] = other.data[i];
                }
            }
            return *this;
        }

     // Overloading << operator for output
        friend std::ostream& operator<<(std::ostream& os, const String& str) {
            os << str.data;
            return os;
        }


    };
} 