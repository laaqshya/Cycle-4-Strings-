#include<stdio.h>
int main(){
    int *p,*t,a,b,q,r;
    printf("enter a and b: ");
    scanf("%d%d",&a,&b);
    q=a/b;
    r=a%b;
    p=&q;
    t=&r;
    printf("quo=%d\nrem=%d\n",*p,*t);  
}