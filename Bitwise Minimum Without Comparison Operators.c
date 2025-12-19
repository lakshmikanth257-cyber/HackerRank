#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int n = (a - b) >> 31;   

    int min = b + ((a - b) & n);

    printf("%d\n", min);
    return 0;
}
