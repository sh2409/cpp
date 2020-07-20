#include<iostream.h>
#include<conio.h>
class Sum
{
	private:
	int x,y,z,w;
	public:
	void add()
	{
		cout<<"Enter 3 no.s:";
		cin>>x>>y>>z;
		w=x+y+z;
		cout<<"Sum is:"<<w;
	}
};
void main()
{
	Sum s;
	clrscr();
	s.add();
	getch();
}