#include <stdio.h>
#define MAX 1000
int lineget(char line[], int maximum);
int main(){
    char current[MAX];
    int len;
    while ((len = lineget(current, MAX)) > 0){
        if (len >=80)
            printf("%s",current);
    }
    return 0;
}

int lineget(char s[], int limit){
    int c,i;
    for (i=0; (c=getchar())!=EOF && i < limit-1 && c != '\n'; ++i)
        s[i] = c;
    if (c=='\n'){
        s[i] = '\n';
        ++i;
    }
    s[i] = '\0';
    return i;
}

