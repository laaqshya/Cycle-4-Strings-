#include <stdio.h>
#include <string.h>
int main() {
    char s1[5][50]; 
    char *s[5];     
    char *t;        
    int i, j;
    printf("Enter 5 strings:\n");
    for (i = 0; i < 5; i++) {
        gets(s1[i]);
        s[i] = s1[i]; 
    }
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(s[i], s[j]) > 0) {
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }
    printf("\nSorted strings:\n");
    for (i = 0; i < 5; i++)
        printf("%s\n", s[i]);
    return 0;
}
