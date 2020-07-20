#include<iostream.h>
#include<conio.h>
class Base
{
	int a;
	char c;
	float f;
	double d;
};
void main()
{
	Base b;
	clrscr();
	cout<<"Size of class Base:"<<sizeof(b)<<endl;
	getch();
}