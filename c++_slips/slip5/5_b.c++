#include<iostream>
using namespace std;


class shape {
    public:
	    virtual void area() = 0;
};


class circle: public shape {
   float r;

   public:
        void area() {
            cout << "\nEnter radius : ";
            cin >> r;
            cout << "\nArea of circle : " << (2.146*r*r);
        }
};


class rectangle: public shape {
	int l,b;

    public:
    void area() {
        cout << "\nEnter length : ";
        cin >> l;
        cout << "\nEnter breadth : ";
        cin >> b;
        cout << "\nArea of rectangle : " << (l*b);
    }
};


class triangle: public shape {
	int h,b;
    float a;

    public:
       void area() {
   	        cout << "\nEnter height : ";
            cin >> h;
            cout << "\nEnter breadth : ";
            cin >> b;
            cout << "\nArea of triangle : " << (0.5*h*b);
       }
};


int main() {
    circle c;
    c.area();

    cout << endl;

    rectangle r;
    r.area();

    cout << endl;

    triangle t;
    t.area();

    cout << endl;

   return(0);
}


