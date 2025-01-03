#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j;
	int c=65;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",c++);
		}
		printf("\n");
	}
	getch();
}
