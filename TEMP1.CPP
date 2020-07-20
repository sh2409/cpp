#include<iostream.h>
#include<conio.h>
template<class T>
	int input(T t1,T t2)
	{
		T t3;
		t3=t1;
		t1=t2;
		t2=t3;
		cout<<"values after swapping:"<<t1<<t2;
	}

int main()
{
	clrscr();
	int a,b;
	cout<<"enter 2 values: ";
	cin>>a>>b;
	getch();
}