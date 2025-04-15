#include<iostream.h>
#include<conio.h>
 
class number
{
    private:
        int i;
        public:
            number(){}
            number(int num)
            {
                i=num;
            }
 
            number operator++()
            {
            ++i;
            return *this;
            }
 
            number operator++(int)
            {
            number temp=*this;
            i++;
            return temp;
            }
 
            void display()
            {
                cout<<"i = "<<i<<endl;
            }
};
 
int main()
{
    number o(5),o1(5);
    clrscr();
 
    cout<<"\nOriginal Number = "<<endl;
    o.display();
    ++o;
    cout<<"\n\nAfter pre-increment number = "<<endl;
    o.display();
    o1++;
    cout<<"\n\nAfter post-increment number = "<<endl;
    o1.display();
    getch();
    return 0;
}

