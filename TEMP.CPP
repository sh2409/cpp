#include<iostream.h>
#include<conio.h>

template<class T>
{
	int input(T t1,T t2)
	{
		int t3;
		t3=t1+t2;
		cout<<"Addition is: "<<t3<<endl;

	}
}
void main()
{
	clrscr();
	int a,b;
	input(a,b);
	getch();
}