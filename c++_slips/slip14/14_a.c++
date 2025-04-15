#include<iostream>
#include<conio.h>
 
using namespace std;

inline float diameter(float r)
{
    return(r/2);
}
 
inline float circlearea(float r)
{
    return(3.14*r*r);
}
 
inline float circumeference(float r)
{
    return(3.14*2*r);
}
 
int main()
{
    float radius;
     int clrscr();
    cout<<"\nEnter Radius of circle : ";
    cin>>radius;
    cout<<"\n\nDiameter of circle : "<<diameter(radius);
    cout<<"\nArea of circle : "<<circlearea(radius);
    cout<<"\nCircumeference of circle : "<<circumeference(radius);
    getch();
    return 0;
}
