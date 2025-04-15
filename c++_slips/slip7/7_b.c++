#include <iostream>
using namespace std;

class Vector {
    int *a, *b;
    int n, n1;
public:
    void create() {
        cout << "Enter dimension of first vector: ";
        cin >> n;
        a = new int[n];
        cout << "Enter elements of first vector: ";
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << "Enter dimension of second vector: ";
        cin >> n1;
        b = new int[n1];
        cout << "Enter elements of second vector: ";
        for (int j = 0; j < n1; j++) {
            cin >> b[j];
        }
    }

    void display() {
        cout << "\nThe first vector is: (";
        for (int i = 0; i < n; i++) {
            cout << a[i];
            if (i != n - 1) cout << ", ";
        }
        cout << ")";

        cout << "\nThe second vector is: (";
        for (int j = 0; j < n1; j++) {
            cout << b[j];
            if (j != n1 - 1) cout << ", ";
        }
        cout << ")";
    }

    void calculateUnion() {
        int *unionArray = new int[n + n1];
        int unionSize = 0;

        // First vector directly added
        for (int i = 0; i < n; i++) {
            unionArray[unionSize++] = a[i];
        }

        // Check second vector's elements for duplicates
        for (int j = 0; j < n1; j++) {
            bool found = false;
            for (int k = 0; k < n; k++) {
                if (b[j] == a[k]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                unionArray[unionSize++] = b[j];
            }
        }

        // Display union
        cout << "\nThe union of the vectors is: (";
        for (int i = 0; i < unionSize; i++) {
            cout << unionArray[i];
            if (i != unionSize - 1) cout << ", ";
        }
        cout << ")";

        delete[] unionArray;
    }

    ~Vector() {
        delete[] a;
        delete[] b;
    }
};

int main() {
    Vector v;
    int choice;
    do {
        cout << "\n\n--- MENU ---";
        cout << "\n1. Accept vectors";
        cout << "\n2. Display vectors";
        cout << "\n3. Calculate union";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: v.create(); break;
            case 2: v.display(); break;
            case 3: v.calculateUnion(); break;
            case 4: cout << "Exiting..."; break;
            default: cout << "Invalid choice!";
        }
    } while (choice != 4);

    return 0;
}
