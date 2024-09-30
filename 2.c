#include <stdio.h>
#include <math.h>

int main(){
    double S = 0.0;
    int i = 1;

    for(i; i <= 25; i++){
        S += sin(i);
    }

    printf("S = %.3f\n", S);
    return 0;
}