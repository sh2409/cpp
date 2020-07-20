#include<iostream.h>
#include<conio.h>

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

void main()
{
	clrscr();
	int a,b;
	cout<<"Enter values of a & b: ";
	cin>>a>>b;
	cout<<"Values before swapping: "<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl;
	swap<int> s;
	s.get(a,b);
	getch();
}