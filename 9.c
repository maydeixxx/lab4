#include <stdio.h>
#include <math.h>

int main(){
    double x = 5.0;
    double N = 10.0;
    double S = 0.0;
    double d = 1.0;
    double v = 0.0;

    for(int i = 1; i <= N; i++){
        v += 1;
        S += pow(x, i) / (d = d * v);
    }
    S += 1;

    printf("S = %.2f", S);
    return 0;
}