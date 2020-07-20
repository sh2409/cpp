#include<stdio.h>
#include<conio.h>
void main()
{
	int s,e,i,j,count=0;
	clrscr();
	printf("\n Enter no:");
	scanf("%d %d",&s,&e);
	for(i=s;i<=e;i++)
	{
		for(j=1;j<=e;j++)
		{
			if(i%j==0)
			{
				count++;
			}

		}
		if(count==2)
		{
			printf("\n %d",i);
		}
		count=0;
	}

	getch();
}