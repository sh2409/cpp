#include<iostream.h>
#include<conio.h>
template<class X> void fun(X a)
{
	cout<<"a: "<<a<<endl;
}
template<class X,class Y>void fun(X b,Y c)
{
	cout<<"b: "<<b<<endl;
	cout<<"c: "<<c<<endl;
}
void main()
{
	clrscr();
	fun(5);
	fun(11.5,24);
	getch();
}
