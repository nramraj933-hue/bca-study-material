#include<iostream.h>
#include<conio.h>
#include<string.h>

class Account
{
  protected:
   int accno;
   char name[20];
   float balance;

   public:
   void create()
   {
     cout<<" Enter account number:";
     cin>>accno;
     cout<<" Enter acoount holder name:";
     cin>>name;
     cout<<"Enter Balance:";
     cin>>balance;

     }
};
class deposite:virtual public account
{
   int amt;

   piblic:
     void depo();
   {
    cout<<"enter deposited amount:"<<endl;
    cin>>amt;
    balance=balance+amt;

    cout<<"amount successfully deposited";
    }
};
class withdraw:virtual public account
{
  int amt;

  public:
  void with()
  {
       cout<<" enter withdraw amount:"<<endl;
       cin>>amt;
   if(balance<amt)
   {
	cout<<"invalid balance";
   }
   else
   {
      balance=balance-amt;
      cout<<"account successfully withdraw";
      }
   }
};
class access:public deposite,public withdraw
{
     public:
     void acc()
     {
	cout<<"account number:"<<accno<<endl;
	cout<<"account name:"<<name<<endl;
	cout<<"account balance:"<<balance<<endl;
    }
};
void main()
{
  clrscr();
  access a;
  int ch;

  a.create();
  do{
     cout<<"\=====menu=====";
     cout<<"\n 1. deposite";
     cout<<"\n 2. withdraw";
     cout<<"\n 3. check balance";
     cout<<"\n 4. exit";

     cout<<"\n\n enter choice:";
     cin>>ch;

     switch(ch)
     {
      case 1:
	a.depo();
	break;
      case 2:
	a.with();
	 break;
      case 3:
	a.acc();
	  break;
      case 4:
	  break;
      default:
	 cout<<"invalid choice";
     }
    }while(ch!=4);

    getch();
}