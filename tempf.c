#include <stdio.h>
int main() {
    void printTemp(float t[2][7]);
    float t[2][7];
    int i, j;
    for(i = 0; i < 2; i++) {
        printf("Enter temperatures for city %d for 7 days:\n", i);
        for(j = 0; j < 7; j++) {
            scanf("%f", &t[i][j]);
        }
    }
    printTemp(t);

    return 0;
}
void printTemp(float t[2][7]) {
    int i, j;
    printf("\nTemperatures for the week:\n");
    for(i = 0; i < 2; i++) {
        printf("City %d: ", i);
        for(j = 0; j < 7; j++) {
            printf("%.2f ", t[i][j]);
        }
        printf("\n");
    }
}
