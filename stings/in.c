#include <stdio.h>
int main() {
    char s1[100], s2[100], s3[200]; 
    int i, j, p, k = 0;
    printf("Enter s1:\n");
    gets(s1);  
    printf("Enter s2:\n");
    gets(s2); 
    printf("Enter the position: ");
    scanf("%d", &p);
    for (i = 0; s1[i] != '\0' && i < p - 1; i++)
        s3[k++] = s1[i];
    for (j = 0; s2[j] != '\0'; j++)
        s3[k++] = s2[j];
    for (; s1[i] != '\0'; i++)
        s3[k++] = s1[i];
    s3[k] = '\0'; 
    printf("Result: %s\n", s3);
    return 0;
}
