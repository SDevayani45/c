#include<stdio.h>
void main()
{
int i,n,min,a[20];
printf("enter the range:");
scanf("%d",&n);
printf("enter the array values:");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 }
min=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
} }
printf("%d",min);

getch();
}
