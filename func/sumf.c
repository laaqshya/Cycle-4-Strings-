#include<stdio.h>
int main() {
    int sum();
    sum();
    return 0;
}
int sum()
{
int n, i, num, s = 0;
   printf("Enter how many integers you want to add: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        s=s+num;
    }
   printf("sum=%d",s);
}