#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter a number = ");
    scanf("%d",&a);
    b=(a*a);
    c=b%10;
    if(c==a)
    printf("The no. %d is an autopolymorphic no.",c);
    else 
    printf("The no. %d is not an autopolymorphic no.",c);
    getch();
}
