#include <stdio.h>
#include <math.h>

int main(){
    double S = 0.0;
    int x = 1;
    int v = 1;
    double coef = 0.18;

    for(x; x <= 10; x++){
        S += pow(coef, x);
        coef += 0.02;
    }

    printf("S = %.3f", S);
}