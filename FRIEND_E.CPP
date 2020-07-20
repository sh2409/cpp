#include<iostream.h>
#include<conio.h>
class Even
{
	private:
	int n;
	public:
	Even(int n)
	{
		this->n=n;
	}
	friend void Test(Even);

};
void Test(Even e)
{
	if(e.n%2==0)
	{
		cout<<"Even";
	}
	else
	{
		cout<<"Odd";
	}
}
void main()
{
	clrscr();
	Even e=Even(5);
	Test(e);
	getch();
}
