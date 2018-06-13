#include<stdio.h>
void main()
{
int a,b,c;
printf("enter three nos:");
scanf("%d %d %d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("a is large");
}
else if(b>c)
{
printf("b is large");
}
else
{
printf("c is large");
}
getch();
}
