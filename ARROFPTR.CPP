#include<iostream.h>
#include<conio.h>
void main()
{
	int a[5];
	int *ptr[5];
	clrscr();
	cout<<"Enter array elements:";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<5;j++)
	{
		ptr[j]=&a[j];
	}
	cout<<"Array is:"<<endl;
	for(int k=0;k<5;k++)
	{
		cout<<*ptr[k]<<" ";
	}
	getch();
}