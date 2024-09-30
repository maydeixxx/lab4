#include <stdio.h>
#include <math.h>

int main(){
    double S = 0;
    int N = 19;

    for(int i = 0; i <= N * 2; i += 2){
        S += tan(i);
    }

    printf("S = %.1f\n", S);

    return 0;
}
