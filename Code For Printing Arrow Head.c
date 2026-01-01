#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n<2) {
        printf("Shape Not Possible");
        return 0;
    }


    for (int i=1; i<=n; i++) {
        if (i==1) {
            printf("*\n");
        } else if (i==2) {
            printf("**\n");
        } else {
            printf("*");
            for (int j=1; j<=i-2; j++) {
                printf(" ");
            }
            printf("*\n");
        }
    }


    for (int i=n-1; i>=1; i--) {
        if (i == 1) {
            printf("*\n");
        } else if (i == 2) {
            printf("**\n");
        } else {
            printf("*");
            for (int j=1; j<=i-2; j++) {
                printf(" ");
            }
            printf("*\n");
        }
    }

    return 0;
}
