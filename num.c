#include<stdio.h>
void main()
{
int flag=0,i;
char s[50];
printf("enter a string:");
scanf("%s",&s[i]);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
{
flag+=1;
}
}
if(flag==0)
{
printf("string is not numeric");
}
else
{
printf("numeric");
}

getch();
}
