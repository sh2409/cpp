#include<iostream.h>
#include<conio.h>
int swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void main()
{
	int a,b;
	clrscr();
	cout<<"Enter 2 no.s:"<<endl;
	cin>>a>>b;
	cout<<"Values before swapping:"<<endl<<a<<endl<<b<<endl;
	swap(&a,&b);
	cout<<"values after swapping:"<<endl<<a<<endl<<b<<endl;
	getch();
}