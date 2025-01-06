//wap to check whether a no. is abundant no. or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,s=0;
	printf("Enter a no. =");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			printf("%d , ",i);
		    s=s+i;
		}
	}
	if (s>n)
		printf("\nThe no. %d is an abundant no.",n);
		else 
		printf("\nThe no. %d is not an abundant no.",n);
		
		getch();
}
