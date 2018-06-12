#include<stdio.h>
void main()
{
char st[50];
int i,count=0;
printf("enter the sentence");
scanf("%[^\n]s",st);
for(i=0;st[i]!='\0';i++)
{
if(st[i]==' ')
{
count++;
}
}
printf("no of spaces:%d",count);
getch();
}
