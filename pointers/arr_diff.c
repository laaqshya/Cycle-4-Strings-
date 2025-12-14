#include<stdio.h>
int main(){
    int a[10],i,n,*p,s,l;
    p=a;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    scanf("%d ",p+i);
    s=*p;
    for(i=1;i<=n;i++){
        if(*(p+i)<s)
        s=*(p+i);
    }
    l=*p;
    for(i=1;i<=n;i++){
      if(*(p+i)>l)
      l=*(p+i);
    }
    printf("largest element=%d\nsmallest element=%d\n",l,s);
    printf("difference=%d",l-s);
}