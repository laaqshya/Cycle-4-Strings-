#include <stdio.h>
int main() {
    int a[50], n, i, e, f=0;
    scanf("%d", &n);
    for(i = 0; i < n; i++) 
    scanf("%d", &a[i]);
    printf("enter element:");
    scanf("%d", &e);
    for(i = 0; i < n; i++)
        if(a[i] ==e) {
             f=1; 
             break;
             }
    if(f) 
    printf("Element Found ");
    else     
    printf("Element Not Found\n");
    return 0;
}
