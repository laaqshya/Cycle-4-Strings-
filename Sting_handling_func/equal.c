#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s1[100], s2[100];
    int i, f=0;
    printf("enter s1:");
    gets(s1);
    printf("enter s2:");
    gets(s2);
    for(i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if(tolower(s1[i]) != tolower(s2[i])) {
            f=1;
            break;
        }
    }
    if(f==0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
    return 0;
}
