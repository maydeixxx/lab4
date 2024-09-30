#include <stdio.h>

int main(){
    int P = 1;

    for(int i = 2; i <= 12; i += 2){
        P = P * i;
    }

    printf("P = %d", P);

    return 0;
}