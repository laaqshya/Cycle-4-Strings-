#include <stdio.h>
int main() {
    int Upper();
    if (Upper())
        printf("Matrix is upper triangular.\n");
    else
        printf("Matrix is not upper triangular.\n");
    return 0;
}
int Upper() {
    int a[10][10], r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for (i = 1; i < r; i++) {
        for (j = 0; j < i; j++) {
            if (a[i][j] != 0)
                return 0;
        }
    }
    return 1;
}
