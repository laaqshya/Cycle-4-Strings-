#include <stdio.h>
int main() {
    int a[10][10];
    int r, c,i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements of the array:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The 2D array is:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
