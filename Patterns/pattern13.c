#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=1;i<=9;i=i+2)
	{
		for(j=i;j>=1;j=j-2)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}
