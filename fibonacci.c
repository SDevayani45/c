#include<stdio.h>
void main()
{
int a=0,b=1,c,n,i;
printf("enter the range:");
scanf("%d",&n);
printf("%d",a);
printf("\t%d",b);
for(i=1;i<=n-2;i++)
{
c=a+b;
printf("\t%d",c);
a=b;
b=c;
}
getch();
}
