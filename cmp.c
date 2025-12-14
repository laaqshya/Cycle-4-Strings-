#include <stdio.h>
#include<ctype.h>
int main() {
    char s1[200], s2[50];
    int i, j,f=0;
    printf("Enter string1:");
    gets(s1);
    printf("Enter string2:");
    gets(s2);
    for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
    {
        if(toupper(s1[i])!=toupper(s2[i])){
            f=1;
            break;
        }
    }
    if(f==1)
    printf("unequal");
    else
    printf("equal");
    return 0;
}