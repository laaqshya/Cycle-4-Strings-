#include<stdio.h>
int main()
{
    int dis(int n);
    int i,n;
    printf("enter n: ");
    scanf("%d",&n);
    dis(n);
}
int dis(int n)
{
    if(n==0)
    return 0;
    else
    {
        return dis(n-1);
         printf("%d\n",n);
    }
}