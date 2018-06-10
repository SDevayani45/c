#include<stdio.h>
void main()
{
int n,a[30],i;
printf("enter the range");
scanf("%d",&n);
printf("enter the array values:");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
 printf("%d\n %d",i,a[i]);
}
getch();
}
