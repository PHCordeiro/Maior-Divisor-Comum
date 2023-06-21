#include <stdio.h>
#include <math.h>

int rec(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return rec(b,(a % b));
    }
}

int main(){
    printf("Resultado = %d", rec(20,16));
}

