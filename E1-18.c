#include <stdio.h>
#define MAX 1000
int lineget(char line[], int maximum);

int main(){
    int len;
    char current[MAX];
    while ((len = lineget(current,MAX)) > 0)
        printf("%s",current);
    return 0;
}

int lineget(char s[],int limit){
    int c,i;
    for (i = 0; (c = getchar()) !=EOF && i < limit - 1 && c != '\n'; ++i){
        if (c !='\t' && c !=' ')
            s[i] = c;
        else
            --i;
    }
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

