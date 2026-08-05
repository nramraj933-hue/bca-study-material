#include<iostream.h>
#include<conio.h>

class abstraction
{
 private:
  int num1,num2;
  public:
   void set (int a,int b)
   {
    num1=a;
    num2=b;
    }
    void display()
    {
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
    }
 };
  void main()
  {
   abstraction obj;
   obj.set(50,100);
   obj.display();
   getch();
  }