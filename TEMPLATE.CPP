#include<iostream.h>
#include<conio.h>
template<class T> T add(T &a,T &b)
{
	T res=a+b;
	return res;
}
void main()
{
	int i=11,j=24;
	float k=11.5,l=5.24;
	clrscr();
	cout<<add(10,20)<<endl;
	cout<<add(i,j)<<endl;
	cout<<add(k,l)<<endl;
	cout<<add(5.11,5.24);
	getch();
}
