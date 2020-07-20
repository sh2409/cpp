#include<iostream.h>
#include<conio.h>
int min(int arr1[5]);
void main()
{
	int arr1[5];
	clrscr();
	cout<<"Enter array elements:" ;
	for(int j=0;j<5;j++)
	{
		cin>>arr1[j];
	}
	min(arr1);
	getch();
}
int min(int arr[5])
{
	int min=arr[0];
	for(int i=0;i<5;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"Min no:"<<min;
}
