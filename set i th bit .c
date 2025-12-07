#include <stdio.h>

void n(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",a|(1<<b));
    return;
}

int main() {
    n();

    
    return 0;
}
