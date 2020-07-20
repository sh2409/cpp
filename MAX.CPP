#include<iostream.h>
#include<conio.h>
int max(int arr[5]);
void main()
{
	int arr1[5]={11,24,5,6,7};
	int arr2[5]={1,5,2,11,4};
	clrscr();
	cout<<"Max element is:"<<max(arr1)<<endl;
	cout<<"Max element is:"<<max(arr2);
	getch();
}
int max(int arr[5])
{
	int max=arr[0],i;
	for(i=0;i<5;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	return max;
}
