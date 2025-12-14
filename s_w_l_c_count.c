#include <stdio.h>
#include <ctype.h>
int main() {
    char p[500];
    int i, cc=0, sc=0, wc=0, lc=1; 
    printf("Enter a paragraph (press ENTER twice to end):\n");
    for(i=0; i<499; i++) {
        p[i] = getchar();
        if(p[i]=='\n' && (i>0 && p[i-1]=='\n')) {
            p[i] = '\0';
            break;
        }
    }
    p[i] = '\0';
    for(i=0; p[i]!='\0'; i++) {
        if(isalpha(p[i])) 
        cc++;
        else if(p[i]==' ') {
         sc++;
          wc++;
        }
        else if(p[i]=='\n') 
        lc++;
    }
    if(i>0) 
    wc++;
    printf("words=%d\nspaces=%d\ncharacters=%d\nlines=%d\n", wc, sc, cc, lc);
    return 0;
}
