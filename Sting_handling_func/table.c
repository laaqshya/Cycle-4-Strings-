#include <stdio.h>
#include <string.h>
int main() {
    char s[10][100];   
    int n, i;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar(); 
    printf("Enter %d strings:\n", n);
    for(i = 0; i < n; i++) 
        gets(s[i]);  
    printf("Table of Strings:\n");
    for(i = 0; i < n; i++) 
        puts(s[i]);   
    return 0;
}
