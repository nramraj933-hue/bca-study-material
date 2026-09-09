#include<iostream.h>
#include<conio.h>

class com
{
	int x;
	int y;
	public:
		com(int a)
		{
		x=y=a;
		}
	  com(int a,int b)
	  {
	  x=a;
	  y=b;
	  }
	  void display()
	  {
	  cout<<"\n x="<<x;
	  cout<<"\n y="<<y;
	  }
	  void operator++();
	  void operator--();
	 };
       void com::operator++()
       {
       x=++x;
       y=++y;
      }
      void com::operator--()
      {
      x=--x;
      y=--y;
      }
     void main(){
     clrscr();
     com c1(1);
     com c2(10,20);
     cout<<"\n c1 object:";
     c1.display();
     ++c1;
     c1.display();
     cout<<"\n c2 object";
     c2.display();
     --c2;
     c2.display();
     getch();
  }