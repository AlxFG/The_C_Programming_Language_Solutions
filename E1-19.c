#include <stdio.h>
#define MAX 1000
int lineget(char line[], int maximum);
void reverse(int length, char string[], char anstring[]);
int main(){
    char input[MAX];
    char output[MAX];
    int len;
    while((len=lineget(input, MAX))>0){
        reverse(len-2,input,output);
        printf("%s",output);
    }
    return 0;
}

int lineget(char s[], int limit){
    int c, i;
    for (i=0; i<limit && (c=getchar())!=EOF && c!='\n';++i){
        if (c!='\n')
            s[i]=c;
    }
    if (c=='\n'){
        s[i]=c;
        ++i;
    }
    s[i]='\0';
    return i;
}
void reverse(int i, char s[], char t[]){
    int c;
    c = 0;
    while (i>=0){
        t[c]=s[i];
        ++c;
        --i;
    }
    t[c]='\n';
    ++c;
    t[c]='\0';
}
