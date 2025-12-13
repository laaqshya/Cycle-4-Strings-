#include <stdio.h>
int main() {
    int a[10][10], r, c, i, j;
    float s, avg;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < r; i++) {
        s = 0;
        for(j = 0; j < c; j++) {
            s = s + a[i][j];
        }
        avg = s / c;
        printf("Average of row %d: %f\n", i, avg);
    }
    return 0;
}
