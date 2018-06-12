#include<stdio.h>
void main()
{
char st[40];
int i,count=0;
printf("enter the sentence:");
scanf("%[^\n]s",st);
for(i=0;st[i]!='\0';i++)
{
 count=count+1;
}
for(i=0;st[i]!='\0';i++)
{
if(st[i]==' ')
{
 count=count-1;
}
}
printf("no of characters:%d",count);
getch();
}
