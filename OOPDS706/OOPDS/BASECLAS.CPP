
#include<iostream.h>
#include<conio.h>

 class base
 {
    public:
    int x;
    base()
   {
   x=10;
   cout<<"Base default constructor \n";
   }
 };
 class derived:public base
 {
   int y;
   public:
   derived()
   {
    cout<<"derived default construtor \n";
    }
    derived(int i)
    {
     y=i;
       cout<<"derived parameterized constructor \n";
       }
       void display()
       {
	cout<<x<<"\n"<<y;
	}
      };
     void main()
     {
     clrscr();
     derived d1;
     derived d2(100);
     d2.display();
     getch();
}