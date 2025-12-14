#include <stdio.h>
int main() {
    int a[50], n, e, l, h,m;
    printf("enter n:");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) 
    scanf("%d", &a[i]);
    printf("enter e:");
    scanf("%d", &e);
    l= 0;
    h = n - 1;
    while(l<= h) {
        m= (l + h) / 2;
        if(a[m] == e) {
            printf("Element Found at position %d\n", m+1);
            return 0;
        }
        else if(e < a[m])
            h= m - 1;
        else
            l = m + 1;
    }
    printf("Element Not Found\n");
    return 0;
}
