#include <stdio.h>
#define MAX 300
#define MIN 0
#define STEP 20
int main(){
    int convert(int fahr);
    int fahr,cels;
    fahr = MIN;
    while(fahr <=  MAX){
        cels = convert(fahr);
        printf("%3d %3d\n",fahr,cels);
        fahr = fahr + STEP;
    }
    return 0;
}
int convert(int fahr){
    fahr = 5 * (fahr-32) /9;
    return fahr;
}



