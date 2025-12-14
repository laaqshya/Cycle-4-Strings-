#include <stdio.h>
int main() {
    int a[10], i, n, *p, e, f = 0;
    p = a;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", p + i);
    printf("Enter element to search: ");
    scanf("%d", &e);
    for(i = 0; i < n; i++) {
        if(*(p + i) == e) {
            f = 1;
            break;
        }
    }
    if(f == 1)
        printf("Found");
    else
        printf("Not found");
    return 0;
}
