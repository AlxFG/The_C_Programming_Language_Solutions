#include <stdio.h>
int main(){
    int c,wl,width,height;
    int sizes[10];
    wl = height = 0;
    for (c=0; c<10;++c){
        sizes[c]=0;}
    while ((c=getchar())!=EOF){
        if (wl > 10){
            ++sizes[9];
            wl = 0;}
        if (c=='\t'||c=='\n' || c==' '){
            ++sizes[wl-1];
            wl = 0;}
        else
            ++wl;
        }
    for (c=0; c<10;++c){
        printf("%3d |",c+1);
        for(wl = sizes[c]; wl!=0;--wl){
            putchar('*');}
        putchar('\n');}
    return 0;
}
