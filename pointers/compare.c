#include <stdio.h>
#include<ctype.h>
int main() {
    char s1[100], s2[100];
int compare(char s1[], char s2[]);
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    if (compare(s1, s2))
        printf("Strings are equal");
    else
        printf("Strings are not equal");
    return 0;
}
int compare(char s1[], char s2[]) {
    int i;
    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if (tolower(s1[i]) != tolower(s2[i]))
            return 0;
    }
    return 1;
}
