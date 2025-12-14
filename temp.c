#include <stdio.h>
int main() {
    float t[2][7]; 
    int i, j;
    for(i = 0; i < 2; i++) {
        printf("Enter temperatures for city %d for 7 days:\n", i);
        for(j = 0; j < 7; j++) {
            scanf("%f", &t[i][j]);
        }
    }
    printf("\nTemperatures for the week:\n");
    for(i = 0; i < 2; i++) {
        printf("City %d: ", i);
        for(j = 0; j < 7; j++) {
            printf("%f ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
