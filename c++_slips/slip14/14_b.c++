#include <iostream>
#include <cstring>
 using namespace std;
class MyString {
private:
    char *str;
    int length;
 
public:
    // Constructor
    MyString(const char *s) {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }
 
    // Destructor
    ~MyString() {
        delete[] str;
    }
 
    // Function to reverse the case of each alphabet
    MyString& reverseCase() {
        for (int i = 0; i < length; ++i) {
            if (isalpha(str[i])) {
                if (islower(str[i]))
                    str[i] = toupper(str[i]);
                else
                    str[i] = tolower(str[i]);
            }
        }
        return *this;
    }
 
    // Function to compare length of two strings
    bool operator<(const MyString &other) const {
        return length < other.length;
    }
 
    // Function to add a constant 'n' to each alphabet of a string
    MyString& operator+(int n) {
        for (int i = 0; i < length; ++i) {
            if (isalpha(str[i])) {
                str[i] += n;
            }
        }
        return *this;
    }
 
    // Function to display the string
    void display() const {
        cout << str << endl;
    }
};
 
int main() {
    MyString str1("Hello World!");
    MyString str2("Goodbye");
 
    cout << "Original strings:" << endl;
    str1.display();
    str2.display();
 
    // Reverse the case of each alphabet
    str1.reverseCase().display();
 
    // Compare lengths of two strings
    if (str1 < str2) {
        cout << "String 1 is shorter than String 2." << endl;
    } else {
        cout << "String 1 is longer than or equal to String 2." << endl;
    }
 
    // Add a constant 'n' to each alphabet of a string
    str2 + 1;
   cout << "After adding 1 to each alphabet of String 2:" <<endl;
    str2.display();
 
    return 0;
}
