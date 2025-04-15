#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;

#define MAXSIZE 100

class myfile {
    FILE *fp;       // file pointer
    char fn[MAXSIZE]; // file name

public:
    myfile(const char* fname) {
        strcpy(fn, fname);
    }

    myfile operator+(myfile);
    void operator!();
    void display();
};

void myfile::display() {
    fp = fopen(fn, "r");
    if (fp == NULL) {
        cout << "Error opening file: " << fn << endl;
        return;
    }
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        cout << ch;
    }
    fclose(fp);
}

void myfile::operator!() {
    myfile f4("sy.txt");
    char ch;
    fp = fopen(fn, "r");
    f4.fp = fopen(f4.fn, "w");

    if (fp == NULL || f4.fp == NULL) {
        cout << "Error opening files for case conversion." << endl;
        return;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isupper(ch)) {
            fputc(tolower(ch), f4.fp);
        } else if (islower(ch)) {
            fputc(toupper(ch), f4.fp);
        } else {
            fputc(ch, f4.fp);
        }
    }

    fclose(fp);
    fclose(f4.fp);

    remove("abc.txt");
    rename("sy.txt", "abc.txt");
}

myfile myfile::operator+(myfile f2) {
    myfile f3("abc.txt");
    fp = fopen(fn, "r");
    f2.fp = fopen(f2.fn, "r");
    f3.fp = fopen(f3.fn, "w");

    if (fp == NULL || f2.fp == NULL || f3.fp == NULL) {
        cout << "Error opening files for concatenation." << endl;
        return f3;
    }

    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        fputc(ch, f3.fp);
    }
    fclose(fp);

    while ((ch = fgetc(f2.fp)) != EOF) {
        fputc(ch, f3.fp);
    }
    fclose(f2.fp);
    fclose(f3.fp);

    return f3;
}

int main() {
    myfile f1("xyz.txt");
    myfile f2("lmn.txt");
    myfile f3("abc.txt");

    cout << "First file:\n";
    f1.display();

    cout << "\nSecond file:\n";
    f2.display();

    f3 = f1 + f2;
    cout << "\n\nAfter concatenation (abc.txt):\n";
    f3.display();

    cout << "\n\nAfter case conversion (! operator):\n";
    !f3;
    f3.display();

    return 0;
}
