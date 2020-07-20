#include<iostream.h>
#include<conio.h>
template<class T>
class A
{
	public:
	T num = 5;
	T n = 6;
	void add()
	{
		cout<<"Addition is:"<<num+n<<endl;
	}
};
int main()
{
	A<int> a;
	clrscr();
	a.add();
	getch();
	return 0;
}