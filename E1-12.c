#include <stdio.h>
int main(){
    int c;
    while ((c=getchar())!=EOF){
        if (c=='\n')
            putchar(c);
        else {
            putchar(c);
            putchar('\n');
        }
    }


