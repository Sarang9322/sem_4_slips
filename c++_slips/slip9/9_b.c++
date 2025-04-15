#include <iostream>
#include <iomanip>  // setw आणि setfill साठी
using namespace std;

class Time {
    int h, m, s;

public:
    void get() {
        cout << "\nEnter Hour, Minutes and Seconds : ";
        cin >> h >> m >> s;
    }

    void display() {
        cout << "\n---- Time is ---- "
             << setfill('0') << setw(2) << h << ":"
             << setfill('0') << setw(2) << m << ":"
             << setfill('0') << setw(2) << s << endl;
    }

    Time operator -(Time t2) {
        Time t;

        // Convert both times to seconds
        int total1 = h * 3600 + m * 60 + s;
        int total2 = t2.h * 3600 + t2.m * 60 + t2.s;
        int diff = total1 - total2;

        if (diff < 0) diff = -diff;  // Ensure positive difference

        // Convert back to h, m, s
        t.h = diff / 3600;
        diff %= 3600;
        t.m = diff / 60;
        t.s = diff % 60;

        return t;
    }
};

int main() {
    Time t1, t2, t3;
    t1.get();
    t1.display();

    t2.get();
    t2.display();

    t3 = t1 - t2;
    cout << "\nTime1 - Time2 :\n";
    t3.display();

    return 0;
}
