#include <iostream>
using namespace std;

// Function to swap values using pointers
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int x = 500, y = 100;

    cout << "Before Swap:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    swap(&x, &y); // passing reference via pointer

    cout << "\nAfter Swap:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
