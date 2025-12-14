#include <stdio.h>
int main() {
    int a[50], n, i, j, t;
    printf("enter n:");
    scanf("%d", &n);
    printf("enter elements:");
    for(i = 0; i < n; i++) 
    scanf("%d", &a[i]);
    for(i = 0; i < n-1; i++)
        for(j = i+1; j < n; j++)
            if(a[j] > a[j+1]) {
                t= a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
    for(i = 0; i < n; i++) 
    printf("%d\n", a[i]);
    return 0;
}
