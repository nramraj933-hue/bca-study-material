#include<iostream.h>
#include<conio.h>

int factorial (int n);

void main ()
{
	clrscr();
	int n;
	cout<<"Enter  Your Number:";
	cin>>n;
	cout<<"Your factorial is:"<<factorial(n);
	getch();
}
	int factorial (int n)
	{
		if(n>1)
	    {
		return n *factorial(n-1);
	    }else
	    {
	    return 1;

	    }
}