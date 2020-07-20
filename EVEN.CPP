#include<iostream.h>
#include<conio.h>
class even
{
	int i,n,count;
	public:
	int even1()
	{
		count=0;
		cout<<"Enter the no:";
		cin>>n;
		for(i=1;i<=n;i++)
		{
			if(i%2==0)
			{

				cout<<i<<endl;
				count++;

			}


		}
		cout<<"count: "<<count;
	}

};
void main()
{
	clrscr();
	even e;
	e.even1();
	getch();
}