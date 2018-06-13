#include<stdio.h>
void main()
{
int no,flag=0,temp;
printf("enter the number:");
scanf("%d",&no);
temp=no;
while(temp!=1)
{
 if(temp%2!=0)
 {
  flag=1;
  break;
 }
 temp=temp/2;
}
if(flag==0)
{
printf("\n %d is power of 2",no);
}
else if(flag==1)
{
printf("\n %d not a power of 2",no);
}
getch();
}
