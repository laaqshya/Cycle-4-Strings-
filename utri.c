#include <stdio.h>
int main() {
    int a[10][10];
    int r, c, i, j, flag = 1;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 1; i < r; i++) {
        for(j = 0; j < i; j++) { 
            if(a[i][j] != 0) {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }

    if(flag)
        printf("Matrix is upper triangular.\n");
    else
        printf("Matrix is not upper triangular.\n");
    return 0;
}
