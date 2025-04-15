#include <iostream>
using namespace std;

class MyArray {
    int size;
    int* ptr;

public:
    MyArray(int no) {
        size = no;
        ptr = new int[size];
        for (int i = 0; i < size; i++) {
            cout << "Enter element " << (i + 1) << ": ";
            cin >> ptr[i];
        }
    }

    void display() {
        cout << "\nElements are:\n";
        for (int i = 0; i < size; i++) {
            cout << ptr[i] << "\t";
        }
        cout << endl;
    }

    void calculateSum() {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += ptr[i];
        }

        cout << "\nSum of all elements: " << sum << endl;
    }

    ~MyArray() {
        delete[] ptr;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    MyArray d(n);
    d.display();
    d.calculateSum();

    return 0;
}
