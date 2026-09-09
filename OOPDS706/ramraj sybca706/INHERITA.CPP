#include<iostream.h>
#include<conio.h>
class base
{
 int a;
 public:
 void geta()
 {
 a=10;
}
void puta()
{
 cout<<a;
 }
};
 class derived :public base
 {
 int d;
 public:
 void getd()
 {
 d=10;
 }
 void putd()
 {
 cout<<d;
 }
};
void main()
{
clrscr();
derived d1;
d1.geta();
d1.puta();
d1.getd();
d1.putd();
getch();
}
