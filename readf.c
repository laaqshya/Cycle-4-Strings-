#include <stdio.h>
int main() {
    int a[10][10], r, c;
void readArray(int r, int c, int a[10][10]);
void printArray(int r, int c, int a[10][10]);
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    readArray(r, c, a);
    printf("The 2D array is:\n");
    printArray(r, c, a);
    return 0;
}
void read(int r, int c, int a[10][10]) {
    printf("Enter elements of the array:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d", &a[i][j]);
}
void print(int r, int c, int a[10][10]) {
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}
