#include<iostream.h>
#include<conio.h>

class travels
{
	protected:
		int tno;
		char cname[30];
	public:
		void accept()
		{
			cout<<"\nEnter Travelling no : ";
			cin>>tno;
			cout<<"Enter company name : ";
			cin>>cname;
		}
};

class route:public travels
{
	public:
		int id;
		char s[10],d[10];
		void acc()
		{
			cout<<"\nEnter route id : ";
			cin>>id;
			cout<<"Enter source station : ";
			cin>>s;
			cout<<"Enter Destination station : ";
			cin>>d;
		}
};

class reservation:public route
{
public:
	int no_of_seats,fare,dd,mm,yyyy;
	char tclass[20];
	void get()
	{
		cout<<"\nEnter no of seats : ";
		cin>>no_of_seats;
		cout<<"Enter travel class : ";
		cin>>tclass;
		cout<<"Enter date(DD/MM/YYYY) : ";
		cin>>dd>>mm>>yyyy;
	}

	void put()
	{
		cout<<"\n\nTravel no : "<<tno;
		cout<<"\nCompany name : "<<cname;
		cout<<"\nRoute id : "<<id;
		cout<<"\nRoute source : "<<s;
		cout<<"\nRoute destination : "<<d;
		cout<<"\nNo of seats : "<<no_of_seats;
		cout<<"\nTravel class : "<<tclass;
		cout<<"\nTrain date : "<<dd<<"/"<<mm<<"/"<<yyyy;
	}
};

int main()
{
	int i,n;
	reservation r[20];
	clrscr();
	cout<<"\nEnter number of records : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		r[i].accept();
		r[i].acc();
		r[i].get();
	}

	for(i=0;i<n;i++)
	{
		r[i].put();
	}
	getch();
	return 0;
}
