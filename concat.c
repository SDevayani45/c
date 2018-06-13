#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[50];
printf("enter string1 :");
scanf("%s",a);
printf("enter string2:");
scanf("%s",b);
strcat(a,b);
printf("string after concatination:%s",a);
getch();
}
