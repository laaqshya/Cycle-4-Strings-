#include <stdio.h>
int main() {
    int a[10][10], b[10][10], d[10][10];
    int r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements of matrix A:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of matrix B:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            d[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Difference of matrices  is:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
