//autopolymorphic no.
#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	printf("Enter a no.=");
	scanf("%d",&x);
	if((x*x)%10==x || (x*x)%100==x)
	printf("%d is a autopolymorphic no.",x);
	else
	printf("%d is not a autopolymorphic no.",x);
	getch();
}
