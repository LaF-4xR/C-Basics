#include<stdio.h>
#include<conio.h>
void main()
{
	int x; 
	printf("Enter the number = ");
	scanf("%d",&x);
	if(x%7==0 && x%10==7)
	printf("%d is buzz no.",x);
	else 
	printf("%d is not a buzz no.",x);
	getch();
}
