#include <iostream>
#include <cmath> // For math functions
using namespace std;

// Volume of Cylinder
float volume_cylinder(float r, float h) {
    return 3.14 * r * r * h;
}

// Volume of Cone
float volume_cone(float r, float h) {
    return (3.14 * r * r * h) / 3;
}

// Volume of Sphere
float volume_sphere(float r) {
    return (4.0 / 3) * 3.14 * r * r * r;
}

int main() {
    float cylinder_h, cylinder_r, cone_h, cone_r, sphere_r;

    cout << "Enter Dimensions" << endl;

    // Cylinder
    cout << "\n1. Cylinder" << endl;
    cout << "Height : ";
    cin >> cylinder_h;
    cout << "Radius : ";
    cin >> cylinder_r;

    // Cone
    cout << "\n2. Cone" << endl;
    cout << "Height : ";
    cin >> cone_h;
    cout << "Radius : ";
    cin >> cone_r;

    // Sphere
    cout << "\n3. Sphere" << endl;
    cout << "Radius : ";
    cin >> sphere_r;

    // Output
    cout << "\n==============================\n";
    cout << "Volume of Cylinder : " << volume_cylinder(cylinder_r, cylinder_h) << endl;
    cout << "Volume of Cone     : " << volume_cone(cone_r, cone_h) << endl;
    cout << "Volume of Sphere   : " << volume_sphere(sphere_r) << endl;

    return 0;
}
