#include <iostream>
#include <fstream>
using namespace std;

class movie {
public:
    int year;
    char mname[20];
    char dname[20];
    int budget;

    void accept() {
        cout << "\nEnter Movie Name     : ";
        cin >> mname;
        cout << "Enter Release Year   : ";
        cin >> year;
        cout << "Enter Director Name  : ";
        cin >> dname;
        cout << "Enter Budget         : ";
        cin >> budget;
    }

    void display() {
        cout << "\nMovie Name     : " << mname;
        cout << "\nRelease Year   : " << year;
        cout << "\nDirector Name  : " << dname;
        cout << "\nBudget         : " << budget << "\n";
    }
};

int main() {
    movie m[5];
    int n;

    fstream file;
    file.open("movie.txt", ios::out | ios::binary);  // writing in binary mode

    if (!file) {
        cout << "Error opening file for writing.\n";
        return 1;
    }

    cout << "Enter the number of movie records: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        m[i].accept();
        file.write((char*)&m[i], sizeof(m[i]));
    }

    file.close();

    // Now read back the data
    file.open("movie.txt", ios::in | ios::binary);
    if (!file) {
        cout << "Error opening file for reading.\n";
        return 1;
    }

    cout << "\n\n--- Movie Details from File ---\n";
    for (int i = 0; i < n; i++) {
        file.read((char*)&m[i], sizeof(m[i]));
        m[i].display();
    }

    file.close();
    return 0;
}
