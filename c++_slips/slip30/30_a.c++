#include<iostream.h>
#include<conio.h>
 
class array2;
class array1
{
    int *a;
    int n1,i;
    public:
        void accept()
        {
            cout<<"\nEnter length of first array : ";
            cin>>n1;
            a=new int[n1];
            for(i=0;i<n1;i++)
            {
                cout<<"\nEnter value for array : ";
                cin>>a[i];
            }
        }
 
        void display()
        {
            for(i=0;i<n1;i++)
            {
            cout<<a[i]<<"\t";
            }
        }
 
        friend void avg(array1,array2);
};
 
class array2
{
    int *b;
    int n2,i;
        public:
        void accept1()
        {
            cout<<"\nEnter length of second array : ";
            cin>>n2;
            b=new int[n2];
            for(i=0;i<n2;i++)
            {
                cout<<"\nEnter value for array : ";
                cin>>b[i];
            }
        }
 
        void display()
        {
            for(i=0;i<n2;i++)
            {
            cout<<b[i]<<"\t";
            }
        }
 
        friend void avg(array1,array2);
};
 
void avg(array1 ob1,array2 ob2)
{
int s1,s2;
int i,sum,avg;
for(i=0;i<ob1.n1;i++)
{
sum=sum+ob1.a[i];
avg=sum/ob1.n1;
}
cout<<"Average of eneterd numbers are : "<<avg;
for(i=1;i<ob2.n2;i++)
{
sum=sum+ob2.b[i];
avg=sum/ob2.n2;
}
 
cout<<"\nAverage of eneterd numbers are : "<<avg;
}
 
void main()
{
array1 a1;
array2 a2;
clrscr();
a1.accept();
a2.accept1();
cout<<"\n1st array : ";
a1.display();
cout<<"\n2nd array : ";
a2.display();
avg(a1,a2);
getch();
}

