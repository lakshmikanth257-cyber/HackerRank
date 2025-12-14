#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void n(){
    float a,b;
    scanf("%f %f",&a,&b);
    printf("The final price is: %f",a - (a*b/100));
    return;
}

int main() {
    n();

    
    return 0;
}
