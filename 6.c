#include <stdio.h>

int main(){
    int S = 0;
    int N = 20;

    for(int i = 1; i <= N; i++){
        if(i % 2 == 0){
            S -= i;
        }
        else {
            S += i;
        }
    }
    printf("S = %d\n", S);
}