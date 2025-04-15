#include<iostream>
using namespace std;

class Point {
    int x, y;

    public:
        void setpoint(int a, int b) {
            x = a;
            y = b;
        }

        void showpoint() {
            cout << "(" << x << ", " << y << ")";
        }
};

int main() {
    int a, b;
    Point p;

    cout << "Enter coordinates" << endl;
    cout << "Enter x: ";
    cin >> a;
    cout << "Enter y: ";
    cin >> b;

    p.setpoint(a, b);
    cout << "The point is: ";
    p.showpoint();

    return 0;
}
