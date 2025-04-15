#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdlib.h>
 
class student
{
    int rollno,total_sub,marks[10];
    char sub_name[10][10],name[20];
    float per;
    char grade;
    public:
        void getdata()
        {
            int i;
            cout<<"\nEnter roll no : ";
            cin>>rollno;
            cout<<"Enter name : ";
            cin>>name;
            cout<<"How many subject : ";
            cin>>total_sub;
            for(i=0;i<total_sub;i++)
            {
            cout<<"\nEnter subject name : ";
            cin>>sub_name[i];
            cout<<"\nEnter marks : ";
            cin>>marks[i];
            }
        }
 
        void display()
        {
               int tot_marks=0;
            int i;
            cout<<"\nRoll number : "<<rollno;
            cout<<"\nStudent name : "<<name;
            for(i=0;i<total_sub;i++)
            {
            cout<<"\nSubject name  : "<<sub_name[i];
            cout<<"\nSubject marks : "<<marks[i];
            tot_marks=tot_marks+marks[i];
            }
            per=tot_marks/total_sub;
            cout<<"\nTotal obtain marks : "<<tot_marks;
            cout<<"\n\nPercentage : "<<per;
            if(per>=70)
            {
            cout<<"\nGrade=Distinction";
            }
            else if(per>=60)
            {
            cout<<"\nGrade=A";
            }
            else if(per>=50)
            {
            cout<<"\nGrade=B";
            }
            else if(per>=40)
            {
            cout<<"\nGrade=Pass";
            }
            else
            {
            cout<<"\nGrade=Fail";
            }
            }
};
void main()
{
clrscr();
student s;
s.getdata();
s.display();
getch();
}

