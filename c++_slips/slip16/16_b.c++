#include<iostream>
#include<string.h>
#include<conio.h>

 
using namespace std;
class mystring
{
    int a[3][3],i,j;
    public:
        void get();
        void put();
        void operator-();
        void operator++();
};
 
void mystring::get()
{
    int i,j;
    cout<<"\nEnter matrix elements : \n";
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    cin>>a[i][j];
    }
    }
}
 
void mystring::put()
{
    int i,j;
    cout<<"\nMatrix is : \n";
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    cout<<a[i][j];
    cout<<"\t";
    }
    }
}
 
void mystring::operator-()
{
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    a[i][j]=-a[i][j];
    }
    }
}
 
void mystring::operator++()
{
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    a[i][j]=++a[i][j];
    }
    }
}
 
int main()
{
    mystring m1;
     int clrscr();
    cout<<"\nEnter matrix value ";
    m1.get();
    m1.put();
    -m1;
    cout<<"\nAfter negetion matrix : \n";
    m1.put();
    ++m1;
    cout<<"\nAfter increment : \n";
    m1.put();
    m1++;
    m1.put();
    getch();
    return 0;
}

