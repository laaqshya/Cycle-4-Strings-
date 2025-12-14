#include <stdio.h>
#include <string.h>
int main() {
    char str[10][100];  
    int n, i;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar(); 
    printf("Enter %d strings:\n", n);
    for(i = 0; i < n; i++) 
        gets(str[i]);   
    printf("\nTable of Strings:\n");
    for(i = 0; i < n; i++) 
        puts(str[i]);   
    return 0;
}
