#include <stdio.h>

int main()
{
    char st;
    printf("enter a char");
    scanf("%c",&st);
    if(st=='a'||st=='e'||st=='i'||st=='o'||st=='u')
    printf("vowels");
    else
    printf("consonant");
    return 0;
}
