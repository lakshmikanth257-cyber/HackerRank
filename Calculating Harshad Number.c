#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, num, sum = 0;

    scanf("%d", &N);
    num = N;


    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }


    if (N % sum == 0) {
        printf("%d is a harshad number", N);
    } else {
        printf("%d is not a harshad number", N);
    }

    return 0;
}
