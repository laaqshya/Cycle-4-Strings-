#include <stdio.h>
int main() {
    char s1[100], s2[100]; 
    int i, p, l1, l2;
    printf("Enter s1:\n");
    gets(s1);  
    printf("Enter s2:\n");
    gets(s2); 
    for(i = 0; s1[i] != '\0'; i++);
    l1 = i;
    for(i = 0; s2[i] != '\0'; i++);
    l2 = i;
    printf("Enter the position: ");
    scanf("%d", &p);
    for(i = l1; i >= p - 1; i--) {
        s1[i + l2] = s1[i];
    }
    for(i = 0; i < l2; i++) {
        s1[p - 1 + i] = s2[i];
    }
    s1[l1 + l2] = '\0';
    printf("Inserted string:\n");
    puts(s1);
    return 0;
}
