#include <stdio.h> 
int main() { 
char para[1000],c; 
int i, characters = 0, spaces = 0, lines = 1, words = 0; 
printf("Enter a paragraph:\n"); 
for(i=0;(c=getchar())!=’#’;i++){ 
para[i]=c; 
} 
para[i]=’\0’; 
for (i = 0; para[i] != '\0'; i++) { 
characters++; 
if (para[i] == ' ') 
spaces++; 
if (para[i] == '\n') 
lines++; 
if (para[i] == ' ' || para[i] == '\n' ) 
words++; 
} 
printf("\nCharacters: %d\n", characters); 
printf("Spaces: %d\n", spaces); 
printf("Lines: %d\n", lines); 
printf("Words: %d\n", words); 
return 0; 
} 
