#include<stdio.h>
int main()
{
    char s[10];
    int i,j,t;
    printf("enter string: ");
    gets(s);
    for(i=0;s[i]!='\0';i++){
        for(j=0;s[j]!='\0';j++){
            if(i!=j && s[i]<s[j]) { 
            t=s[i];
            s[i]=s[j];
            s[j]=t;
           }
        }
     }
     printf("sorted string:\n");
     for(i=0;s[i]!='\0';i++)
     printf("%c",s[i]);
    return 0;
}