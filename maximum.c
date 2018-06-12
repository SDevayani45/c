#include<stdio.h>
void main()
{
int temp,s[20],i;
printf("enter numbers:");
for(i=1;i<=10;i++)
{
 scanf("%d",&s[i]);
}
temp=s[1];
for(i=1;i<=10;i++)
{
if(temp<s[i])
{
temp=s[i];
}
}
printf("%d",temp);
getch();
}
