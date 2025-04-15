#include <iostream>
#include <string>
using namespace std;

class MyStr {
public:
    int replace(char *str, char c1, char c2 = 'r');
};

int MyStr::replace(char *str, char c1, char c2) {
    int count = 0;
    while (*str != '\0') {
        if (*str == c1) {
            *str = c2; // Assignment
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    MyStr m;
    char str[100], c1, c2;

    cout << "Enter String: ";
    cin >> str;

    cout << "Enter character which is to replace: ";
    cin >> c1;

    cout << "Enter character to replace with (press Enter to use 'r'): ";
    cin.ignore();
    c2 = cin.get();

    // If only Enter was pressed, c2 will be '\n'
    if (c2 == '\n') c2 = 'r';

    int replaced = m.replace(str, c1, c2);

    cout << "\nNumber of Replacements: " << replaced;
    cout << "\nAfter Replacement: " << str << endl;

    return 0;
}
