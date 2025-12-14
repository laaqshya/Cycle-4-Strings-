#include<stdio.h>
int main()
{
    char s[10],i,l;
    printf("enter string: ");
    gets(s);
    for(i=0;s[i]!='\0';i++);
    l=i;
    for(i=l;i>=1;i--)
    printf("%c",s[i-1]);
    return 0;
}