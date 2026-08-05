#include<iostream.h>
#include<conio.h>
class student
{
	public:
	int rno;
	char name[20];
};

class mark:public student
{
	public:
	int m1,m2;

};

class result:public marks
{
	public:
	int result;
	void get()
	{
	cout<<"enter rno:";
	cin>>rno;
	cout<<"enter name:";
	cin>>name;
	cout<<"enter mark1 and mark2:";
	cin>>m1>>m2;
	}
	void cal()
	{
	result=m1+m2;
	}
	void display()
	{
	cout<<"name:"<<name<<endl;
	cout<<"rno:"<<rno<<endl;
	cout<<"marks1:"<<m1<<endl;
	cout<<"marks2:"<<m2
	cout<<"result:"<<result;

	}
    };
     void main()
     {
     result r;
     clrscr();
     r.get();
     r.cal();
     r.display();
     getch();
     }
