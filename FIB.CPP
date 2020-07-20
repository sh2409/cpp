#include<iostream.h>
#include<conio.h>

class fibonacci
{
	public:
	int n,i,n1,n2,n3;
	int fib()
	{
		n1=0;
		n2=1;
		cout<<"Enter no of terms for fib series:";
		cin>>n;
		for(i=1;i<=n;i++)
		{
			if(n==1)
			{
				cout<<n1<<" ";
			}
			if(n==2)
			{
				cout<<" "<<n2<<" ";
			}
			else
			{
				n3=n1+n2;
				n1=n2;
				n2=n3;
				cout<<n3<<" ";
			}
		}
	}
};
void main()
{
	clrscr();
	fibonacci f;
	f.fib();
	getch();
}
