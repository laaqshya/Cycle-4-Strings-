#include <stdio.h>
#include <string.h>
int main() {
    char s[10][100], t[100];
    int n,i,j;
    printf("enter n: ");
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++) 
    gets(s[i]);
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(strcmp(s[i],s[j])>0){
                strcpy(t,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],t);
            }
    for(i=0;i<n;i++) 
    puts(s[i]);
}
