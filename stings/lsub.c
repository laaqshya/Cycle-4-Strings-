#include <stdio.h>

int main() {
    char s1[200], s2[50];
    int i, j, c= 0, f, l1 = 0, l2 = 0;
    printf("Enter the main string:\n");
    gets(s1);
    printf("Enter the substring to search:\n");
    gets(s2);
    for(l1=0; s1[l1] != '\0'; l1++);
    for(l2= 0; s2[l2] != '\0'; l2++);
    for(i = 0; i <= l1- l2; i++) {
        f= 1;
        for(j = 0; j < l2; j++)
            if(s1[i+j] != s2[j]) 
            { f = 0;
             break;
             }
        if(f)
         c++;
    }
    printf("Number of occurrences: %d\n", c);
    return 0;
}
