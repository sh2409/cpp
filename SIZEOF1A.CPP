#include<iostream.h>
#include<conio.h>
int Array(int arr[])
{
	cout<<"size of array:"<<sizeof(arr)<<endl;
}
void main()
{
	int arr[]={1,2,3,4};
	clrscr();
	Array(arr);
	getch();
}