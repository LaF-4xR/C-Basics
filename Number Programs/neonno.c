#include<stdio.h>
#include<conio.h>
void main()
{
	int sq,n,rem,s=0;
	printf("Enter a no. = ");
	scanf("%d",&n);
	for(sq=n*n;sq>0;sq=sq/10)
	{
		rem=sq%10;
		s=rem+s;
	}
	if(n==s)
	printf("%d is a neon no.",n);
	else 
	printf("%d is not an neon no.",n);
	getch();
}
