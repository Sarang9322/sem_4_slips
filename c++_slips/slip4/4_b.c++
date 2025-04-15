#include <iostream>
#include <cstring>
#include <cstdlib> // for exit()
using namespace std;

class emp {
public:
    int empcode;
    char empname[30];

    void get() {
        cout << "Enter Employee Code: ";
        cin >> empcode;
        cout << "Enter Employee Name: ";
        cin.ignore(); // flush newline
        cin.getline(empname, 30);
    }
};

class fulltime : public emp {
public:
    int no_of_days, daily_wages, salary1;

    void getdata() {
        cout << "Enter number of days worked: ";
        cin >> no_of_days;
        cout << "Enter daily wages: ";
        cin >> daily_wages;
    }

    void cal() {
        salary1 = no_of_days * daily_wages;
    }

    void show() {
        cout << "\n---------------------------\n";
        cout << "Employee Number: " << empcode << endl;
        cout << "Employee Name: " << empname << endl;
        cout << "Full-time Salary: Rs. " << salary1 << endl;
    }
};

class parttime : public emp {
public:
    int no_of_working_hours, hourly_wages, salary2;

    void getdata() {
        cout << "Enter hourly wages: ";
        cin >> hourly_wages;
        cout << "Enter number of working hours: ";
        cin >> no_of_working_hours;
    }

    void cal1() {
        salary2 = hourly_wages * no_of_working_hours;
    }

    void show1() {
        cout << "\n---------------------------\n";
        cout << "Employee Number: " << empcode << endl;
        cout << "Employee Name: " << empname << endl;
        cout << "Part-time Salary: Rs. " << salary2 << endl;
    }
};

int main() {
    int ch, k = 0, l = 0, cnt;
    fulltime f1[5];
    parttime p1[5];

    do {
        cout << "\n\n****** MENU ******";
        cout << "\n1. Enter details of Full-time employee";
        cout << "\n2. Enter details of Part-time employee";
        cout << "\n3. Display Full-time employee with highest salary";
        cout << "\n4. Display Part-time employee with highest salary";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch) {
        case 1:
            cout << "\nHow many Full-time employees? ";
            cin >> k;
            for (int i = 0; i < k; i++) {
                f1[i].get();
                f1[i].getdata();
                f1[i].cal();
                f1[i].show();
            }
            break;

        case 2:
            cout << "\nHow many Part-time employees? ";
            cin >> l;
            for (int i = 0; i < l; i++) {
                p1[i].get();
                p1[i].getdata();
                p1[i].cal1();
                p1[i].show1();
            }
            break;

        case 3:
            if (k == 0) {
                cout << "\nNo Full-time employees entered yet!";
                break;
            }
            {
                int temp = 0;
                for (int i = 1; i < k; i++) {
                    if (f1[temp].salary1 < f1[i].salary1) {
                        temp = i;
                    }
                }
                cout << "\nFull-time Employee with highest salary:\n";
                f1[temp].show();
            }
            break;

        case 4:
            if (l == 0) {
                cout << "\nNo Part-time employees entered yet!";
                break;
            }
            {
                int temp = 0;
                for (int i = 1; i < l; i++) {
                    if (p1[temp].salary2 < p1[i].salary2) {
                        temp = i;
                    }
                }
                cout << "\nPart-time Employee with highest salary:\n";
                p1[temp].show1();
            }
            break;

        case 5:
            exit(0);

        default:
            cout << "\nInvalid choice!";
        }
    } while (ch != 5);

    return 0;
}
