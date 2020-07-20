#include<iostream.h>
#include<conio.h>
template<class X, class Y> void fun(X a, Y b)
{
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b;
}
void main()
{
	clrscr();
	fun(24,11.5);
	getch();
}