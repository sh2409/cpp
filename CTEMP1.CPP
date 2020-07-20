#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

template<class T>

class swap
{
	public:
	void get(T t1,T t2)
	{
		T t3;
		t3=t1;
		t1=t2;
		t2=t3;
		cout<<"Values after swapping: "<<endl<<"a:"<<t1<<endl<<"b:"<<t2<<endl;
	}
};

void main(int n,char *argv[])
{
	clrscr();
	int a,b;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	cout<<"Values before swapping: "<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl;
	swap<int> s;
	s.get(a,b);
	getch();
}