#include<iostream.h>
#include<conio.h>
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return n*fact(n-1);
}
void main()
{
	int n;
	clrscr();
	cout<<"Enter no:";
	cin>>n;
	cout<<"Factorial is:"<<fact(n);
	getch();
}