#include <iostream>
#include <string>
using namespace std;

class Worker {
    string name;
    int hours;
    int salary;

public:
    void accept() {
        cout << "Enter worker name: ";
        cin >> name;
        cout << "Enter number of hours worked: ";
        cin >> hours;
    }

    void calculate(int pay_rate = 50) {
        salary = hours * pay_rate;
    }

    void display() {
        cout << "\nWorker Name: " << name;
        cout << "\nTotal Hours Worked: " << hours;
        cout << "\nSalary: Rs. " << salary << endl;
    }
};

int main() {
    Worker w;
    w.accept();
    w.calculate();  // uses default pay rate = 50
    w.display();
    return 0;
}
