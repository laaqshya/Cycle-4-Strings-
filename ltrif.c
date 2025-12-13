#include <stdio.h>

int main() {
    int Lower();   
    if (Lower())
        printf("Matrix is lower triangular.\n");
    else
        printf("Matrix is not lower triangular.\n");
    return 0;
}
int Lower() {
    int i, j, n, m;
    int a[10][10];  
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
        for (j = i + 1; j < m; j++){
             if (a[i][j] != 0)
                return 0;
        } 

    return 1;
}

