#include <stdio.h>
int main() {
    char s1[100], s2[100], *p1, *p2;
    int i, j;
    p1 = s1;
    p2 = s2;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    for(i = 0; *(p1 + i) != '\0'; i++);
    for(j = 0; *(p2 + j) != '\0'; j++) {
        *(p1 + i) = *(p2 + j);
        i++;
    }
    *(p1 + i) = '\0'; 
    printf("Concatenated string: %s", s1);
    return 0;
}

