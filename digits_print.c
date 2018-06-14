#include<stdio.h>
void main()
{
int num,rem,rev=0;
printf("enter the no:");
scanf("%d",&num);
while(num!=0)
{
 rem=num%10;
 rev=(rev*10)+rem;
 num=num/10;
}
num=rev;
while(num!=0)
{
 rem=num%10;
 printf("\n%d",rem);
 num=num/10;
}
getch();
}
