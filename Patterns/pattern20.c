#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=2;i<=5;i++)
	{
		for(j=2;j<=i;j++)
		{
			printf("%d",i%2);
		}
		printf("\n");
	}
	getch();
}
