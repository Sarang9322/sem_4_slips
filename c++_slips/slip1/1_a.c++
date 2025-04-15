/*g++ slip_1_a.c++ -o slip_1_a*/ 
#include <iostream>
using namespace std;

inline int max(int a, int b) {
    return (a > b) ? a : b;
}

inline int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int a, b;
    cout << "Enter 2 numbers" << endl;

    cout << "Number 1: ";
    cin >> a;

    cout << "Number 2: ";
    cin >> b;

    cout << "The maximum number is: " << max(a, b) << endl;
    cout << "The minimum number is: " << min(a, b) << endl;

    return 0;
}
