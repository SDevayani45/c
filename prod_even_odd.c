#include<stdio.h>
void main()
{
int n,m,prod;
printf("enter two numbers:");
scanf("%d%d",&n,&m);
prod=n*m;
if(prod%2==0)
{
printf("even number");
}
else
{
printf("odd number");
}
getch();
}
