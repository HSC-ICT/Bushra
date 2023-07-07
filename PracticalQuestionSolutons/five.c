#include <stdio.h>

int main(){
    int n = 99, sum = 0;

    for(int i = 1; i <= n; i += 2) sum += i;

    printf("1 + 3 + 5 + ... + %d = %d\n", n, sum);
}