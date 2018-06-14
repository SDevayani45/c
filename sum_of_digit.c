#include<stdio.h>
void main()
{
int sum=0,n,a;
printf("enter the no:");
scanf("%d",&n);
while(n!=0)
{
a=n%10;
sum+=a;
n=n/10;
}
printf("\t%d",sum);
getch();
}
