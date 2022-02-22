#include <stdio.h>
int main(){
    int c,wl,height;
    int values[10];
    for (c = 0; c<10;++c){
        values[c]=0;
    }
    for (wl = 0;c!= EOF;c=getchar()){
        if (c == '\n' || c == ' ' || c =='\t'){
            ++values[wl-1];
            wl = 0;}
        else
            ++wl;
    }
    for (c = 0; c<10;++c){
        printf("%d ",values[c]);
    }
    putchar('\n');
    height = 0;

    for (c=0; c<10;++c){
        if (height<=values[c])
            height = values[c];
    }

    for (c=height;c>0;--c){
        printf("%3d |",c);
        for (wl=0;wl<10;++wl){
            if (values[wl]==c){
                printf(" * ");
                --values[wl];
            }
            else
                printf("   ");
        }
        putchar('\n');
    }
    printf("  0 |");
    for (c=1;c<10;++c){
        printf(" %d|",c);}
    printf(" 10+|\n");
    return 0;
}
