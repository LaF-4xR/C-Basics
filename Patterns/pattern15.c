#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=9;i>=1;i=i-2)
	{
		for(j=i;j<=9;j=j+2)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}
