#include <stdio.h>
int main(){
    int b,t,n;
    int c;
    b = t = n =0;
    while ((c = getchar())!=EOF){
        if (c == ' ')
            ++b;
        else if (c == '\t')
            ++t;
        else if (c=='\n')
            ++n;
    };
    printf("blanks:%d\ntabs:%d\nnewline:%d",b,t,n);
    return(0);
}

