//check wheather a no. is a palindrome or not.
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,n,rem,s=0;
	printf("Enter a no. = ");
	scanf("%d",&n);
	for(x=n;n>0;n=n/10)
	{
		rem=n%10;
		s=(s*10)+rem;
	}
	n=x;
	if(s==n)
	printf("%d is a palindrome no.",x);
	else 
	printf("%d is not a palindrome no.",x);
	getch();
}
