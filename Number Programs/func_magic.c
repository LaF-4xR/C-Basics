//wap to check whether a no. is magic or not by using func. 4th type
#include<conio.h>
#include<stdio.h>
int magic(int);
void main()
{
	int n,p;
	printf("Enter the no. = ");
	scanf("%d",&n);
	p=magic(n);
	if(p==1)
	printf("%d is a Magic no.",n);
	else 
	printf("%d is not a Magic no.",n);
}
int magic(int a)
{
	int rem,s=0,s1=0;
	for(;a>0;a=a/10)
	{
		rem=a%10;
		s=s+rem;
	}
	for(;s>0;s=s/10)
	{
		rem=s%10;
		s1=s1+rem;
	}
	return s1;
}
