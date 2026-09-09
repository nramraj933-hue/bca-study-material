#include<iostream.h>
#include<conio.h>

class  A
{
	int a,b;
	public:
	void input()
	{
		cout<<"enter value:";
		cin>>a>>b;
	}
	friend void add(A ob);
};
void add(A ob)
{
	int c;
	c=ob.a+ob.b;
	cout<<"sum +"<<c;
}
void main()
{
A kk;
clrscr();
kk.input();
add(kk);
getch();
}
