#include<iostream.h>
#include<conio.h>

class A
 {
   public:
   virtual void display()
   {
    cout<< " Base class is invoked"<<endl;
    }
 };
 class b
  {
    public:
    void display()
    {
     cout<<"Derived class is invoked"<<endl;
     }
  };
void main()
{
  clrscr();
  A*a;
  A a1;
  a=&a1;
  a-> display();
  getch();
}