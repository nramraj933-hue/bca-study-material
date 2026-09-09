#include<iostream.h>
#include<conio.h>

class number
{
    int n;
    public:

 void getdata()
 {
  cout<<"Enter  Number:";
  cin>>n;
 }
 int operator>(number obj)
 {
  if(n>obj.n)
	   return 1;
  else
	   return 0;
 }
 void display()
  {
	cout<<n;
  }
};
void main()
{
    clrscr();
    number n1,n2;

    cout<<"\nEnter First Number:";
    n1.getdata();
    cout<<"\nEnter Second Number:";
    n2.getdata();

    if(n1>n2)
    {
	cout<<"\n Greater Number is:";
	n1.display();
    }
    else
    {
	cout<<"\n Greater Number is:";
	n2.display();
    }
    getch();
}
