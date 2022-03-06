#include <stdio.h>
int main(){
    int c,wl,height;
    int values[10];
    //declaring variables
    for (c = 0; c<10;++c){
        values[c]=0;
    }
    //assigning all array values with 0
    for (wl = 0;c!= EOF;c=getchar()){
        if (c == '\n' || c == ' ' || c =='\t'){
            if (wl>=10){
                ++values[9];
                wl = 0;
            }
            else{
                ++values[wl-1];
                wl = 0;}
        }
        else
            ++wl;
    }
    //getting character input and incrementing the position of the corrensponding array's length for the word length
    for (c = 0; c<10;++c){
        printf("%d ",values[c]);
    }
    //printing out the number of words for each word count
    putchar('\n');
    height = 0;

    for (c=0; c<10;++c){
        if (height<=values[c])
            height = values[c];
    }
    //finding how high the program has to print to

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
    //printing all the a point for each value of the histogram with * as class width can be 1
    printf("  0 |");
    for (c=1;c<10;++c){
        printf(" %d|",c);}
    printf(" 10+|\n");
    //printing out the x axist and its labels
    return 0;
}
