#include<stdio.h>
#include<conio.h>
int fact();
int i,n,f=1;
void main()
{
	int a;
	a=fact();
	printf("\nThe factorial is %d",a);
	getch();
}
int fact()
{
	printf("Enter a number  = ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		if(i==1)
		printf("%d ",i);
		else
		printf("%d x ",i);
		f=f*i;
	}
	return f;
}
