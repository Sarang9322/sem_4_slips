#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
 
class inventory
{
    int mno;
    char mname[20];
    int stock;
    float price;
 
    public:
        void accept()
        {
            cout<<"\nEnter model no : ";
            cin>>mno;
            cout<<"Enter model name : ";
            cin>>mname;
            cout<<"Enter price : ";
            cin>>price;
            cout<<"Enter stock : ";
            cin>>stock;
        }
 
        void display()
        {
            cout<<"\n\nModel no : "<<mno;
            cout<<"\nModel name :"<<mname;
            cout<<"\nModel price : "<<price;
            cout<<"\nModel stock : "<<stock;
        }
 
        int sale(int no,int q)
        {
        if(mno==no)
            {
                if(stock>=q)
                    {
                        stock=stock-q;
                        cout<<"\nSale is done";
                        display();
                        return 2;
                    }
                else
                    {
                        cout<<"\nPurchase is required";
                        purchase(q,no);
                        return 1;
                    }
 
          /*    else
        {
        cout<<"\nPlease enter correct model no";
        } */
        }
        }
 
        void purchase(int no,int q)
        {
 
            if(no==mno)
                {
                    stock=stock+q;
                    cout<<"\nPurchse is done..";
                    display();
                }
        }
};
 
int main()
{
    inventory in[20];
    int qt,ans,no,i,n;
    clrscr();
 
    cout<<"\nEnter no of models : ";
    cin>>no;
 
    for(i=0;i<no;i++)
    {
    in[i].accept();
    }
 
    for(i=0;i<no;i++)
    {
    in[i].display();
    }
 
    cout<<"\n\nEnter model number to be purchase and quantity : ";
    cin>>n>>qt;
    for(i=0;i<no;i++)
    {
    ans=in[i].sale(n,qt);
    if(ans==1)
    {
        cout<<"\nEnter model to be purchse and quantity : ";
        cin>>n>>qt;
        for(i=0;i<no;i++)
        {
        in[i].purchase(n,qt);
        }
    }
    }
    getch();
    return 0;
}


