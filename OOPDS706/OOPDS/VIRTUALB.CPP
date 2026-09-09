#include<iostream.h>
#include<conio.h>
class demo1
	{
	protected:
	int a;
	public:
	void show()
	{
	cout<<"enter a value:";
	cin>>a;
       }
    };
	class demo2:virtual public demo1
	{
	protected:
	int b;
	public:
	void show1()
	{
	cout<<"enter a value:";
	cin>>b;
       }
    };
	class demo3:virtual public demo1
	{
	protected:
	int c;
	public:
	void show2()
	{
	cout<<"enter a value:";
	cin>>c;
       }
    };
	class demo4:public demo2,public demo3
	{
	public:
	void display()
	{
		show();
		show1();
		show2();
		cout<<"multiplication value is"<<a*b*c;
	}
    };
	void main()
	{
	clrscr();
	demo4 a;
	a.display();
	getch();

	}