//wap to check whether a no. is palindrome or not by using func. 3rd type
#include<stdio.h>
#include<conio.h>
void palin(int);
void main()
{
	int n;
	printf("Enter the no. = ");
	scanf("%d",&n);
	palin(n);
	getch();
}
void palin(int x)
{
	int a=x,s=0,rem;
	while(x!=0)
	{
		rem=x%10;
		s=(s*10)+rem;
		x=x/10;
	}
	if(a==s)
	printf("%d is a palindrome no.",a);
	else
	printf("%d is not a palindrome no.",a);
}
