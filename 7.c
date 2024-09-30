#include <stdio.h>

int main(){
    int m = 5;
    int P = 1;

    for(int i = 1; i <= m; i++){
        P = P * i;
    }

    printf("P = %d", P);

    return 0;
}