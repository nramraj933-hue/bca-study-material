#include<iostream.h>
#include<conio.h>

class base
{
     protected:
     int a,b;
     public:
     virtual void getdata(){}
     virtual void putdata()=0;
};
class derived:public base
{
     int c;
     public:
     void getdata()
     {
	 cout<<"\n Enter a:";
	 cin>>a;
	 cout<<"\n Enter b:";
	 cin>>b;
	 cout<<"\n Enter c:";
	 cin>>c;
     }
     void putdata()
     {
	 cout<<"\n A is:"<<a;
	 cout<<"\n B is:"<<a;
	 cout<<"\n C is:"<<a;
      }
};
void main()
{
   clrscr();
   base*b;
   b->getdata();
   b->getdata();
   getch();
 }
