#include<iostream.h>
#include<conio.h>
void main()
{
	int arr[5];
	clrscr();
	cout<<"Enter array elements:";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"Array is:"<<endl;
	for(int j=0;j<5;j++)
	{
		cout<<arr[j]<<"\t";
	}
	getch();
}