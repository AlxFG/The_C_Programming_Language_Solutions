#include <stdio.h>
#define OUT 0
#define IN 1
int main(){
    int c, wc, nl, nc, bc,tc;
    int state;
    state = OUT;
    wc = nl = nc = bc = tc = 0;
    while ((c = getchar())!=EOF){
        ++nc;
        if (c == '\n'){
            ++nl;
            state = OUT;}
        else if (c == ' '){
            ++bc;
            state = OUT;}
        else if (c == '\t'){
            ++tc;
            state = OUT;}
        else if(state==OUT){
            state = IN;
            ++wc;}
    }
    printf("word count:%d\ncharacter count:%d\nblank count:%d\ntab count:%d\n",wc,nc,bc,tc);
    return 0;
}
