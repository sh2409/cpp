#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10];
	int i,min,max;
	clrscr();
	printf("\n Enter array elements:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\n max element is:%d",max);
	printf("\n min element is:%d",min);
	getch();

}