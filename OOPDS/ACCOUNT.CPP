#include<iostream.h>
#include<conio.h>
#include<string.h>
class account
{
	protected:
	int accno;
	char name[50];
	float balance;

//};
//class deposite : public account
//{
 public:
  void create()
    {
     cout<<"enter account number :";
     cin>>accno;

     cout<<"enter account holder name:";
     cin>>name;

     cout<<"enter initial balance :";
     cin>>balance;
     }
};
class deposit :virtual public account
{
	public:
	  void deposite1()
	   {
	    float amt;
	    cout<<"enter deposite amount :";
	    cin>>amt;

	    balance=balance+amt;
	     cout<<"amount deposited succesfully";
	}
};
class withdraw : virtual public account
{
	public:
	 void withdraw1()
	 {
	  float amt;
	  cout<<"enter withdraw amount:";
	  cin>>amt;

	   if(amt <=balance)
	   {
	    balance=balance-amt;
	    cout<<"amount withdraw succesfully";
	    }
	    else
	    {
	    cout<<"insufficient balance";
	    }
	  }
};
class access : public withdraw , public deposit
{
	public:
	 void check_balance()
	   {
	     cout<<"\n account number:"<<accno;
	     cout<<"\n account holder:"<<name;
	     cout<<"\n current balance:"<<balance<<endl;
	   }
};
  void main()
  {
    clrscr();
    access a;
    int ch;

    do
    {
    cout<<"\n\n ^^^^^^^^^^BANK MENU^^^^^^^^^^";
    cout<<"\n1 create an account";
    cout<<"\n2 deposit";
    cout<<"\n3 withdraw";
    cout<<"\n4 check balance";
    cout<<"\n5 exit";
    cout<<"\n enter your choice:";
    cin>>ch;

    switch(ch)
    {
     case 1:
       a.create();
       break;

     case 2:
       a.deposite1();
       break;

     case 3:
       a.withdraw1();
       break;

     case 4:
       a.check_balance();
       break;

     case 5:
       break;

       default:
       cout<<"invalid choice:";
       }
     }while(ch!=5);
     getch();
}