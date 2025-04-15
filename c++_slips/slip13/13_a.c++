#include<iostream>
#include<conio.h>
 using namespace std;
class product
{
    int id,price,qty;
    char i_name[20];
    static int cnt;
    public:
        void getdata()
        {
            cout<<"\nEnter Producr Id : ";
            cin>>id;
            cout<<"Enter Product Name : ";
            cin>>i_name;
            cout<<"Enter Product Price : ";
            cin>>price;
            cout<<"Entre Product Qty : ";
            cin>>qty;
            cnt++;
        }
 
        void display()
        {
            cout<<"\n\nProcut Id = "<<id;
            cout<<"\nProduct Name = "<<i_name;
            cout<<"\nProduct Price = "<<price;
            cout<<"\nProduct Qty = "<<qty;
        }
 
        static void nob()
        {
            cout<<"\nNumber of object created for class are : "<<cnt;
        }
};
 
int product::cnt;
int  main()
{
    product ob[10];
    int clrscr();
    int n,i;
    cout<<"\nEnter No of product :";
    cin>>n;
    for(i=0;i<n;i++)
    {
    ob[i].getdata();
    }
 
    for(i=0;i<n;i++)
    {
    ob[i].display();
    }
 
    ob[n-1].nob();
    getch();
}
