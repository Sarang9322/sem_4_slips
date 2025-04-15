#include <iostream>
#include <cstring>
using namespace std;

class person {
public:
    int mob;
    char name[10], city[20];

    // Default accept function
    void acc() {
        cout << "Enter Person Name: ";
        cin >> name;
        cout << "Enter Person City: ";
        cin >> city;
        cout << "Enter Person Mobile Number: ";
        cin >> mob;
    }

    // Overloaded function to search by name
    void acc(char nme[]) {
        if (strcmp(nme, name) == 0) {
            cout << "\nPerson Name: " << name;
            cout << "\nPerson Mobile Number: " << mob << endl;
        }
    }

    // Overloaded function to search by mobile number
    void acc(int mno) {
        if (mno == mob) {
            cout << "\nPerson Name: " << name;
            cout << "\nPerson Mobile Number: " << mob << endl;
        }
    }

    void dis() {
        cout << "\nPerson Details:";
        cout << "\nName: " << name;
        cout << "\nMobile Number: " << mob;
        cout << "\nCity: " << city << endl;
    }
};

int main() {
    char name[10];
    int mno, i, ch, no = 0;
    person p[20];

    do {
        cout << "\n\nMenu:";
        cout << "\n1. Accept Person Details";
        cout << "\n2. Display Person Details";
        cout << "\n3. Search Mobile Number by Name";
        cout << "\n4. Search Person Details by Mobile Number";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter how many records to insert: ";
                cin >> no;
                for (i = 0; i < no; i++) {
                    cout << "\n--- Person " << (i + 1) << " ---\n";
                    p[i].acc();
                }
                break;

            case 2:
                for (i = 0; i < no; i++) {
                    p[i].dis();
                }
                break;

            case 3:
                cout << "Enter person name to search mobile number: ";
                cin >> name;
                for (i = 0; i < no; i++) {
                    p[i].acc(name);
                }
                break;

            case 4:
                cout << "Enter mobile number to search person details: ";
                cin >> mno;
                for (i = 0; i < no; i++) {
                    p[i].acc(mno);
                }
                break;

            case 5:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while (ch != 5);

    return 0;
}
