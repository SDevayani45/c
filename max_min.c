#include<stdio.h>
void main()
{
int a[50];
int i,max,min,n;
printf("enter the range:");
scanf("%d",&n);
printf("enter the nos:");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
 max=a[i];
}
if(a[i]<min)
{
  min=a[i];
}
}
printf("\n%d",max);
printf("\n%d",min);
getch();
}
