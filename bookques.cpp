#include <iostream>
#include <cstring>  // For strcpy

using namespace std;

class String {
public:
    String(int len = 0) {  // Constructor with optional argument for size
        s = new char[len + 1];  // Allocate memory for the string
        memset(s, 0, len + 1); // Initialize the array with null characters
    }

    ~String() {  // Destructor to deallocate memory
        delete[] s;
    }

    void add(const String& other) {
        int new_len = strlen(s) + strlen(other.s);
        char* temp = new char[new_len + 1];  // Allocate temporary memory
        memset(temp, 0, new_len + 1); // Initialize temporary array with null characters
        strcpy(temp, s);  // Copy existing string
        strcat(temp, other.s);  // Concatenate the other string
        delete[] s;  // Deallocate old memory
        s = temp;  // Update pointer to new string
    }

    void display() {
        cout << s << endl;
    }

private:
    char* s;
};

int main() {
    String s1(10);  // Create string object with size 10
    String s2("World");

    s1.add(s2);
    s1.display();  // Output: World

    return 0;
}
