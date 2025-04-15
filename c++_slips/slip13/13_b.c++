#include<iostream>
#include<conio.h>
 using namespace std;
class cuboid
{
    float len,bre,hei;
    public:
        void getdata()
        {
            cout<<"\nEnter Length,Breadth and Heigth of cuboid : \n";
            cin>>len>>bre>>hei;
        }
 
        void setdata()
        {
            cout<<len<<bre<<hei;
        }
 
        inline void volume()
        {
            cout<<"\nThe Volume of cuboid is : "<<len*bre*hei;
        }
 
        inline void surface_area()
        {
            cout<<"\nThe Surface area of cuboid is : "<<(2*len*bre + 2*bre*hei + 2*len*hei);
        }
};
 
int main()
{
    int clrscr();
    cuboid c;
    c.getdata();
    c.volume();
    c.surface_area();
    getch();
}


