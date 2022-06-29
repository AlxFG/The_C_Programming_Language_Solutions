#include <stdio.h>
#define MAX 1000

int lineget(char line[], int maximum);
void copy(char to[], char from[]);

int main(){
    int len,max;
    char longest[MAX];
    char line[MAX];
    max = 0;
    while((len = lineget(line, MAX)) > 0){
        if(len>max){
            max = len;
            copy(longest, line);
        }
    }
    if (max>0)
        printf("%d:%s",max,longest);
    return 0;
}

int lineget(char s[], int limit){
    int i,c;
    for(i=0; i<limit-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i]=c;
    if(c=='\n'){
        s[i]=c;
        ++i;
    }
    s[i]='\0';
    return i;
}

void copy(char to[], char from[]){
    int i;
    i = 0;
    while((to[i]=from[i])!='\0')
        ++i;
}



