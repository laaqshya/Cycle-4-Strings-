#include<stdio.h>
int main()
{
 int sum(int n);
 int n;
 printf("enter n: ");
 scanf("%d",&n);
 printf("sum=%d",sum(n));
}
int sum(int n)
{
    int x;
    printf("entern a number: ");
    scanf("%d",&x);
    if(n==0)
    return 0;
    else 
    return x+sum(n-1);
}