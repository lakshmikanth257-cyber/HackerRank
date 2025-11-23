#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void res(){
    int a;
    long long int b;
    char c;
    float d;
    double e;
    scanf("%d %lld %c %f %lf",&a,&b,&c,&d,&e);
    printf("%d\n%lld\n%c\n%.3f\n%.9f",a,b,c,d,e);
        
}

int main() {

   res();
    return 0;
}
