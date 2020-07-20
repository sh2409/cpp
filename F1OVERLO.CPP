#include<iostream.h>
#include<conio.h>
class Cal
{
	public:
	int mul(int a,int b)
	{
		return a*b;
	}
	int mul(double x,double y)
	{
		return x*y;
	}
};
void main()
{
	clrscr();
	Cal c;
	cout<<c.mul(11,5)<<endl;
	cout<<c.mul(5,24);
	getch();
}