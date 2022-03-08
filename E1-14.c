#include <stdio.h>
int main(){
    int c,x,y;
    int keycodes[94];
    int values[94];
    for(c=33;c<127;++c){
        keycodes[c-33]=c;
        values[c-33]=0;
    }
    while((c=getchar())!=EOF){
        if(c!=' ' && c!='\n' && c!='\t'){
            ++values[c-33];
        }
    }
    for(c=0;c<94;++c){
        if (x < values[c])
            x = values[c];
    }
    printf("%d",x);
    putchar('\n');
    for(c=x;c>0;--c){
        printf("%3d|",c);
        for(y=0;y<94;++y){
            if(values[y]==c){
                printf(" * ");
                --values[y];
            }
            else
                printf("   ");
        }
        putchar('\n');
    }
    printf("%3d|",0);
    for(c=0;c<95;++c){
        printf(" %c ",keycodes[c]);
    }
    putchar('\n');
    return 0;
}
