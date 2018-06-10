#include<stdio.h>
void main()
{
int n,a[50],temp=0,i,j;
printf("enter the range:");
scanf("%d",&n);
printf("enter the array values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
if(n%2==0)
{
printf("%d %d",a[(n-1)/2],a[n/2]);
}
else
{
printf("%d",a[(n-1)/2]);
}
getch();
}
