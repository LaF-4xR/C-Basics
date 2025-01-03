#include<conio.h>
#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter the Range = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("$",j);
		}
		printf("\n");
	}
	getch();
}
