#include <iostream>
using namespace std;

class Number {
    static int cnt;  // Static variable to count
    int n;
public:
    void Display() {
        cnt++;
        cout << "Number of times display operation performed is: " << cnt << endl;
    }
};

// Static member initialization
int Number::cnt = 0;

int main() {
    Number ob1, ob2, ob3;

    ob1.Display();  // cnt = 1
    ob2.Display();  // cnt = 2
    ob3.Display();  // cnt = 3
    ob1.Display();  // cnt = 4

    return 0;
}
