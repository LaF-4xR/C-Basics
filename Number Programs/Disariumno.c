#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x,n,s=0,rem,c;
	printf("Enter the Number = ");
	scanf("%d",&n);
	for(x=n;n>0;n=n/10)
	{
		c++;
	}
	for(n=x;x>0;x=x/10)
	{
		rem=x%10;
		s=s+pow(rem,c--);
	}
	x=n;
	if(x==s)
	printf("%d is a Disarium Number",x);
	else
	printf("%d is not an Disarium Number",x);
	getch();
}
