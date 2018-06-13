#include<stdio.h>
void main()
{
int a[50],i,sum=0,avg,n;
printf("enter the range:");
scanf("%d",&n);
printf("enter the values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf("\n%d",sum);
printf("\n%d",avg);
getch();
}
