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
	int no;
	clrscr();
	cout<<"Enter no:";
	cin>>no;
	cout<<"Factorial of no:"<<fact(no);
	getch();
}