#include <iostream>
#include <cstring>
using namespace std;

class person {
    char name[20];
    char addr[20];
    float sal, tax;

public:
    void get() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Address: ";
        cin >> addr;
        cout << "Enter Salary: ";
        cin >> sal;
    }

    void cal_tax() {
        if (sal <= 20000) {
            tax = 0;
        } else if (sal <= 40000) {
            tax = (sal * 5) / 100;
        } else {
            tax = (sal * 10) / 100;
        }
    }

    void put() {
        cout << "\n\n----- Person Information -----";
        cout << "\nName     : " << name;
        cout << "\nAddress  : " << addr;
        cout << "\nSalary   : " << sal;
        cout << "\nTax      : " << tax << endl;
    }
};

int main() {
    person p;
    p.get();
    p.cal_tax();
    p.put();
    return 0;
}
