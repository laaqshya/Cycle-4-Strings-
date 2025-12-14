#include <stdio.h>
#include <ctype.h>
int main() {
    void pal();
    pal();
    return 0;
}
void pal() {
    char s[50];
    int i, l, f = 0;
    printf("Enter string: ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++);
    l = i;
    printf("Reversed string:\n");
    for (i = l - 1; i >= 0; i--)
        printf("%c", s[i]);
    printf("\n");
    for (i = 0; i < l / 2; i++) {
        if (toupper(s[i]) != toupper(s[l - 1 - i])) {
            f = 1;
            break;
        }
    }
    if (f == 0)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
}
