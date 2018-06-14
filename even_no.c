#include<stdio.h>
void main()
{
int num,even;
printf("enter the no:");
scanf("%d",&num);
if(num%2==0)
{
even=num-2;
}
else
{
even=num-1;
}
printf("\n%d",even);
getch();
}
