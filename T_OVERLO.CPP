#include<iostream.h>
#include<conio.h>
template<class X> X add(X &a,X &b)
{
       X res=a+b;
       return res;
}
template<class X> X add(X &p,X &q,X &r)
{
	X r1=p+q+r;
	return r1;
}
void main()
{
	clrscr();
	cout<<add(2,3)<<endl;
	cout<<add(11,24,5);
	getch();
}