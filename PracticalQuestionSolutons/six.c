#include <stdio.h>

int main(){
    int n = 100, sum = 0;

    for(int i = 1; i <= n; i++) sum += i * i;

    printf("1^2 + 2^2 + 3^2 + ... + %d^2 = %d\n", n, sum);
}