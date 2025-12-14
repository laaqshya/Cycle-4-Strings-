#include <stdio.h>

int main() {
    int n, i, num, sum = 0;

    printf("Enter how many integers you want to add: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    printf("Sum of %d integers = %d\n", n, sum);

    return 0;
}
