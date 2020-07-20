#include<iostream.h>
#include<conio.h>
int swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<a<<endl<<b;
}
void main()
{
	int x,y;
	clrscr();
	cout<<"Enter 2 no.s:"<<endl;
	cin>>x;
	cin>>y;
	cout<<"Before swapping:"<<endl<<x<<endl<<y<<endl;
	cout<<"After swapping:"<<endl;
	swap(x,y);
	getch();
}