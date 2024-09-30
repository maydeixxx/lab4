#include <stdio.h>
#include <math.h>

int main(){
    double i = 0.1;
    double S = 0;

    for(i; i <= 1.9; i += 0.2){
        S += log(i);
    }

    printf("S = %.3f\n", S);
    return 0;
}