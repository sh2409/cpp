#include<iostream.h>
#include<conio.h>
class fun
{
	public:
	int add(int a,int b)
	{
		return a+b;
	}
	int add(int a,int b,int c)
	{
		return a+b+c;
	}
};
void main()
{
	fun f;
	clrscr();
	cout<<f.add(11,5)<<endl;
	cout<<f.add(11,24,5);
	getch();
}