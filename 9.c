#include <stdio.h>
#include <math.h>

int main(){
    int x = 5;
    int N = 10;
    double S = 0.0;
    int d = 1;
    int v = 0;

    for(int i = 1; i <= N; i++){
        v += 1;
        S += pow(x, i) / (d = d * v);
    }
    S += 1;

    printf("S = %.2f", S);
    return 0;
}