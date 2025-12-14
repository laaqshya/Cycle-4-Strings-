#include <stdio.h>
int main() {
    int Symmetric(); 
    if (Symmetric())
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");
    return 0;
}
int Symmetric() {
    int a[10][10], r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    if (r != c)
        return 0;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] != a[j][i])
                return 0;
        }
    }
    return 1;
}
