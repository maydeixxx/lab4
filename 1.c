#include <stdio.h>

int main(){
    int S = 0;
    int i = 1;

    for(i; i <= 117; i++){
        S += i;
    }
    printf("S = %d\n", S);
    return 0;
}