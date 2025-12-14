#include <stdio.h>
int main() {
    char s[100], oldc, newc;
    char *p;
    printf("Enter a string: ");
    gets(s);
    printf("Enter character to replace: ");
    scanf(" %c", &oldc);
    printf("Enter new character: ");
    scanf(" %c", &newc);
    for (p = s; *p != '\0'; p++) {
        if (*p == oldc)
            *p = newc;
    }
   puts(s);
    return 0;
}
