#include<iostream.h>
#include<conio.h>
class base
{
 int num;
 public:
 void read();
 void print();
};
void base :: read()
{
	cout<<"enter any values:"<<endl;
	cin>>num;
}
void base :: print()
{
	cout<<"the value is :"<<num<<endl;
}
void main()
{
	clrscr();
	base obj;
	obj.read();
	obj.print();
	getch();
}
