#include<iostream.h>
#include<conio.h>

  class base1
  {
    private:
    int a,b,c;
    public:
    void input()
    {
    cout<<"Enter value of base1 class:";
    cin>>a>>b;
   }
   void show ()
   {
     c=a+b;
     cout<<"sum="<<c<<end;
     }
};
   class base2
   {
   private:
   int a,b,c;
   public:
   void input()
 {
 cout<<" Enter the value of base2 class:";
 cin>>a>>b;
 }
 class derive:public base1,public base2
 {
   private:
   int a,b,c;
   public:
   void inputl()
   {
   cout<<"enter value of base2 class:";
   cin>>a>>b;
   }
   void showl()
   {
   c=a-b;
   cout<<"subtraction="<<c<<endl;
   }
};
void main()
{
   clrscr();
   derive ob2;
   ob2.input();
   op2.show();
   op2.input();
   ob2.show();
   ob2.input();
   ob2.showl();
   getch();
}
