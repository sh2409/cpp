#include<iostream.h>
#include<conio.h>
class Max
{
	private:
	int x,y,z;
	public:
	void getdata()
	{
		cout<<"Enter 3 no.s:";
		cin>>x>>y>>z;
	}
	friend void find(Max);
};
void find(Max m)
{
	if(m.x>m.y && m.x>m.z)
	{
		cout<<"Greater no is x="<<m.x;
	}
	else if(m.y>m.x && m.y>m.z)
	{
		cout<<"Greater no is y="<<m.y;
	}
	else
	{
		cout<<"Greater no is z="<<m.z;
	}
}
void main()
{
	Max m1;
	clrscr();
	m1.getdata();
	find(m1);
	getch();
}