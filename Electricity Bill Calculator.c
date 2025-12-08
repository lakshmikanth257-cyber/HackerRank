#include <stdio.h>

int main() {
    int n;
    float bill = 0.0;

    scanf("%d", &n);

    if (n < 0 || n > 1000000) {
        printf("Invalid Input!");
        return 0;
    }

    if (n <= 100) {
        bill = n * 5;
    }
    else if (n <= 300) {
        bill = 100 * 5 + (n - 100) * 7;
    }
    else {
        bill = 100 * 5 + 200 * 7 + (n - 300) * 10;
    }

    if (bill <= 1200) {
        bill = bill - (bill * 0.10);
    }

    printf("The electricity bill is: %.2f.", bill);

    return 0;
}
