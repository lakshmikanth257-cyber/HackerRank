#include <stdio.h>

int main() {
     int n;
    scanf("%d",&n);

    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }

    int target;
    scanf("%d", &target);

    int index = -1;

    for (int i=0;i<n;i++) {
        if (a[i] == target) {
            index = i;
            break;   
        }
    }

    printf("%d", index);
 
    return 0;
}
