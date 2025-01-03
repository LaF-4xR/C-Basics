#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,sp;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(i==1 || i==4 || j==4 || j==1)
			printf("%d ",i);
			else
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
