#include<iostream.h>
#include<conio.h>
void main()
{
	int n,i,fact=1;
	clrscr();
	cout<<"Enter no:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"Factorial is:"<<fact;
	getch();
}