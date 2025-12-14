#include <stdio.h>
int main() {
    int check();
    if (check())
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");
    return 0;
}
int check() {
    char s1[100], s2[100];
    int i, j, l1 = 0, l2 = 0, f;
    printf("Enter s1:\n");
    gets(s1);
    printf("Enter s2:\n");
    gets(s2);
    for (i = 0; s1[i] != '\0'; i++);
    l1 = i;
    for (i = 0; s2[i] != '\0'; i++);
    l2 = i;
    if (l1 != l2)
        return 0;
    for (i = 0; i < l1; i++){
        f = 0;
        for (j = 0; j < l2; j++) {
            if (s1[i] == s2[j]) {
                f = 1;
                s2[j] = '#';
                break;
            }
        }
        if (f == 0)
            return 0;
    }
    return 1;
}
