#include <stdio.h>
int main() {
    int a[10][10], b[10][10], r, c, i, j;
    void add(int a[10][10], int b[10][10]);
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements of matrix A:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of matrix B:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &b[i][j]);
    add(a, b);  
    return 0;
}
void add(int a[10][10], int b[10][10]) {
    int s[10][10],r, c, i, j;
    printf("Enter number of rows and columns again: ");
    scanf("%d %d", &r, &c);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            s[i][j] = a[i][j] + b[i][j];
    printf("Sum of matrices:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d ", s[i][j]);
        printf("\n");
    }
}
