#include <stdio.h>
int main() {
    int a[10][10];
    int r, c, i, j, s= 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            s=s+a[i][j]; 
        }
    }
    printf("Sum of all matrix elements is: %d\n", s);

    return 0;
}
