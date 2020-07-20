#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n,n1=0,n2=1,n3;
	clrscr();
	cout<<"Enter no:";
	cin>>n;
	cout<<n1<<" "<<n2<<" ";
	for(i=2;i<n;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		cout<<n3<<" ";
	}
	getch();
}