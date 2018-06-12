#include<stdio.h>
void main()
{
char st[50];
int i,count=0;
printf("enter the sentence");
scanf("%[^\n]s",st);
for(i=0;st[i]!='\0';i++)
{
if(!((st[i]>='0'&& st[i]<='9)||(st[i]>='a' && st[i]<='z')))
{
count+=1;
}
}
printf("no of special characters:%d",count);
getch();
}
