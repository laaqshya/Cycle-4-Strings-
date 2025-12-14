#include <stdio.h>
int main() {
    char name[3][50];
    int roll[3], i, j;
    float marks[3][6], s, avg, p;
    char grade;
    for(i=0;i<3;i++){
        printf("Enter name of student : "); 
        getchar();
        gets(name[i]);
        printf("Enter roll number: "); 
        scanf("%d",&roll[i]);
        s=0;
        printf("Enter marks of 6 subjects:\n");
        for(j=0;j<6;j++){ 
        scanf("%f",&marks[i][j]); 
        s=s+marks[i][j]; 
        }
        avg=s/6.0; 
        p=(s/600)*100;
        if(p>=90) 
        grade='A';
        else if(p>=80)
        grade='B';
        else if(p>=70) 
        grade='C';
        else if(p>=60) 
        grade='D';
        else 
        grade='F';
        printf("\nStudent: %s\nRoll No: %d\nTotal: %f\nAverage: %f\nPercentage: %f\nGrade: %c\n",name[i],roll[i],s,avg,p,grade);
    }
    return 0;
}
