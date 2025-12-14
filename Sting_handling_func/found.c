#include <stdio.h>
#include <string.h>
int main() {
    char a[10][100], s[100];
    int n,i,f=0;
    printf("enter n:");
    scanf("%d",&n); 
    getchar();
    for(i=0;i<n;i++) 
    gets(a[i]);
    printf("Enter string to search:\n");
    gets(s);
    for(i=0;i<n;i++)
        if(strcmp(a[i],s)==0)
        { f=1;
         break; }
    if(f==1) 
    printf("String Found\n");
    else     
    printf("String Not Found\n");
    return 0;
}
