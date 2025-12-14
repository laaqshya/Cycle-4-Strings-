#include<stdio.h>
int main()
{
    char s1[50],s2[50];
    int i,j;
    printf("enter string 1: ");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
       s2[i]=s1[i];
       s2[i]='\0';
    puts(s2);
    return 0;
}
