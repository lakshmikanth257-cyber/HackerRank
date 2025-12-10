#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void split(int n){
    
    int a=n/100;
    int b=(n/10)%10;
    int c=n%10;
    printf("%d %d %d",a,b,c);

    
}

int main() {
    int n;
    scanf("%d",&n);
    split(n);
    
    return 0;
}
