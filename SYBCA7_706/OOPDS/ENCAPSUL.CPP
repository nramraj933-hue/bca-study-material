#include<iostream.h>
#include<conio.h>

class encapsulation
{
 private:
  int num;
  public:
   void set (int a)
   {
    num=a;
    }
    int get()
    {
    return num;
    }
 };
  void main()
  {
   encapsulation obj;
   obj.set(5);
   cout<<obj.get();
   getch();
  }