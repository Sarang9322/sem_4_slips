#include<iostream.h>
#include<conio.h>

class college
{
	private:
		int id,year;
		char name[20],uname[20];
		public:
			college(){}

			friend ostream&operator<<(ostream &out,const college &c);
			friend istream&operator>>(istream &in,college &c);
};

ostream &operator<<(ostream &out,const college &c)
{
	out<<"\nCollege Id : "<<c.id;
	out<<"\nCollege name : "<<c.name;
	out<<"\nEstablishment year : "<<c.year;
	out<<"\nUniversity name : "<<c.uname<<endl;
	return out;
}

istream &operator>>(istream &in,college &c)
{
	cout<<"\nEnter college id : ";
	in>>c.id;
	cout<<"Enter college name : ";
	in>>c.name;
	cout<<"Enter year of establishment : ";
	in>>c.year;
	cout<<"Enter university name : ";
	in>>c.uname;
	return in;
}

int main()
{
	clrscr();
	college c1;
	cin>>c1;
	cout<<"\nThe college details are : \n";
	cout<<c1;
	getch();
	return 0;
}
