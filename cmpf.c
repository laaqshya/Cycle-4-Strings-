#include<stdio.h>
#include<ctype.h>
int main(){
    void compare(char s1[100],char s2[100]);
    char s1[100],s2[100];
    printf("enter s1:");
    gets(s1);
    printf("Enter s2:");
    gets(s2);
    compare(s1,s2);
    return 0;
}
void compare(char s1[],char s2[]){
    int i,f=0;
    for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++){
        if(toupper(s1[i])!=toupper(s2[i])){
            f=1;
        break;
        }
    }
    if(f==1)
    printf("unequal");
    else
    printf("equal");
}