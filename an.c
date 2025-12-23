#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    int i,j,l1,l2,f=0;
    printf("enter s1:\n");
    gets(s1);
    printf("enter s2:\n");
    gets(s2);
    for(i=1; s1[i]!='\0';i++);
    l1=i-1;
    for(i=1; s2[i]!='\0';i++);
    l2=i-1;
    if(l1!=l2) {
        printf("Not anagrams\n");
    }
    for(i=1;i<=l1;i++){
        f=0;
        for(j=1;j<=l1;j++){
            if(s1[i]==s2[j]){
                f=1;
                s2[j]='#';
                break;
            }
        }
        if(f==0)
            printf("not annagrams");
            break;
    }
    if(f==1)
    printf("annagrams");
  return 0; 
}
