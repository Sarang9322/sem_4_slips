#include <iostream>
#include <fstream>
#include <cstdlib>  // For atoi()
using namespace std;

int main(int argc, char* argv[]) {
    ofstream evenFile("Even.txt");
    ofstream oddFile("Odd.txt");

    if (argc < 2) {
        cout << "Please provide numbers as command line arguments.\n";
        return 1;
    }

    // Loop through all command-line arguments starting from index 1
    for (int i = 1; i < argc; ++i) {
        int num = atoi(argv[i]); // Convert string to int

        if (num % 2 == 0) {
            evenFile << num << " ";
        } else {
            oddFile << num << " ";
        }
    }

    evenFile.close();
    oddFile.close();

    // Display contents of Even.txt
    ifstream inEven("Even.txt");
    cout << "\nContents of Even.txt:\n";
    char ch;
    while (inEven.get(ch)) {
        cout << ch;
    }
    inEven.close();

    // Display contents of Odd.txt
    ifstream inOdd("Odd.txt");
    cout << "\n\nContents of Odd.txt:\n";
    while (inOdd.get(ch)) {
        cout << ch;
    }
    inOdd.close();

    return 0;
}
