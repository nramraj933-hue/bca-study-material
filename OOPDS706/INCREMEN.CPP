#include<iostream.h>
#include<conio.h>

 class ram
 {
     int a,b;
     public:

       ram(int x)
       {
	x=b=a;
       }
       ram(int x,int y)
       {
	 x=a;
	 y=b;
	}
	void display()
	{
	cout<<"\n x="<<a;
	cout<<"\n y="<<b;
	}

	   void operator ++();
	   void operator --();
   };
  void ram :: operator ++()
  {
   a=++a;
   b=++b;
  }
   void ram :: operator --()
  {
   a=--a;
   b=--b;
  }
  void main()
  {
    clrscr();
    ram c1(4);
    ram c2(10,20);
    cout<<"\n c1 object";
    c1.display();
    ++c1;
    c1.display();

    cout<<"\n c2 object";
    c2.display();
    --c2;
    c2.display();
    getch();
 }



