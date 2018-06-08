#include<stdio.h>
void main()
{
int i,j,start,end;
int isPrime;
printf("enter start and end limit:");
scanf("%d%d",&start,&end);
printf("prime nos:",start,end);
if(start<2)
start=2;
for(i=start;i<=end;i++)
{
isPrime=1;
for(j=2;j<i/2;j++)
{
if(i%j==0)
{
isPrime=0;
break;
}
}
if(isPrime==1)
{
printf("%d,",i);
}
}
getch();
}
