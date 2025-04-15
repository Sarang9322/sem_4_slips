#include <iostream>
#include <string>
using namespace std;

class student {
protected:
    int rno;
    string name;
public:
    void getdetails();
};

class theory : virtual public student {
protected:
    int mark1, mark2, mark3, mark4;
public:
    void getmarks();
};

class practical : virtual public student {
protected:
    int p1, p2;
public:
    void getpractical();
};

class result : public theory, public practical {
    int total_marks;
    float per;
    string grade;

public:
    void cal();
    void display();
};

// Definitions

void student::getdetails() {
    cout << "\nEnter Roll no: ";
    cin >> rno;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);
}

void theory::getmarks() {
    cout << "\nEnter marks of 4 theory subjects: ";
    cin >> mark1 >> mark2 >> mark3 >> mark4;
}

void practical::getpractical() {
    cout << "\nEnter marks of 2 practicals: ";
    cin >> p1 >> p2;
}

void result::cal() {
    total_marks = mark1 + mark2 + mark3 + mark4 + p1 + p2;
    per = total_marks / 6.0;

    if (per < 50)
        grade = "C";
    else if (per < 60)
        grade = "B";
    else if (per < 75)
        grade = "A";
    else
        grade = "A+";

    cout << "\nCalculation completed for " << name;
}

void result::display() {
    cout << "\n\n============================";
    cout << "\nRoll No: " << rno;
    cout << "\nName: " << name;
    cout << "\nTheory Marks: " << mark1 << ", " << mark2 << ", " << mark3 << ", " << mark4;
    cout << "\nPractical Marks: " << p1 << ", " << p2;
    cout << "\nTotal Marks: " << total_marks;
    cout << "\nPercentage: " << per;
    cout << "\nGrade: " << grade;
    cout << "\n============================\n";
}

int main() {
    int n = 0, ch;
    result r[40];

    do {
        cout << "\n\n------ STUDENT MANAGEMENT ------";
        cout << "\n1. Accept Student Information";
        cout << "\n2. Display Student Information";
        cout << "\n3. Calculate Percentage and Grade";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "\nHow many students? ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "\nEnter details for Student " << i + 1 << ":";
                    r[i].getdetails();
                    r[i].getmarks();
                    r[i].getpractical();
                }
                break;

            case 2:
                for (int i = 0; i < n; i++) {
                    r[i].display();
                }
                break;

            case 3:
                for (int i = 0; i < n; i++) {
                    r[i].cal();
                }
                break;

            case 4:
                cout << "Exiting...\n";
                return 0;

            default:
                cout << "Invalid choice!";
        }

    } while (ch != 4);

    return 0;
}
