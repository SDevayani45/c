#include<stdio.h>
void main()
{
int x,y;
printf("enter two nos:");
scanf("%d %d",&x,&y);
printf("before swapping");
printf("\nx=%d",x);
printf("\ny=%d",y);
x=x+y;
y=x-y;
x=x-y;
printf("after swapping");
printf("\nx=%d",x);
printf("\ny=%d",y);
getch();
}
