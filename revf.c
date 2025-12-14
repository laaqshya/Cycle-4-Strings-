#include<stdio.h>
int main(){
    void rev(char s[]);
    char s[10];
    printf("enter a string:");
    gets(s);
    rev(s);
    return 0;
}
void rev(char s[]){
    int i,l;
    for(i=0;s[i]!='\0';i++);
    l=i;
    printf("reversed string:");
    for(i=l-1;i>=0;i--)
    printf("%c",s[i]);
}
