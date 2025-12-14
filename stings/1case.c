#include <stdio.h>
#include <ctype.h>
int main() {
    char s[100];
    int i;
    printf("Enter a string:\n");
    gets(s);  
    for(i = 0; s[i] != '\0'; i++) {
        if(islower(s[i]))
            s[i] = toupper(s[i]);
        else if(isupper(s[i]))
            s[i] = tolower(s[i]);
    }
    printf("Converted string: %s\n", s);
    return 0;
}
