#include<stdio.h>
void main()
{
int n1,n2,i,temp,sum,rem;
printf("enter two intervals");
scanf("%d%d",&n1,&n2);
printf("armstrong no btwn %d and %d are",n1,n2);
for(i=n1+1;i<n2;++i)
{
temp=i;
sum=0;
while(temp!=0)
{
rem=(temp%10);
sum+=rem*rem*rem;
temp/=10;
}
if(i==sum)
{
printf("%d",i);
}}
getch();
}
