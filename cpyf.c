#include<stdio.h>
int main(){
    void copy(char s1[],char s2[]);
    char s1[50],s2[50];
    printf("enter string 1: ");
    gets(s1);
    copy(s1,s2);
    return 0;
}
void copy(char s1[],char s2[]){
    int i,j;
    for(i=0;s1[i]!='\0';i++)
       s2[i]=s1[i];
       s2[i]='\0';
    puts(s2);
}
 