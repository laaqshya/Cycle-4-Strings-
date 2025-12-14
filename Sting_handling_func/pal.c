#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int i, j, f = 1;
    printf("enter s:");
    gets(s);
    for(i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        if(s[i] != s[j]) {
            f= 0;
            break;
        }
    }
    if(f)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}

