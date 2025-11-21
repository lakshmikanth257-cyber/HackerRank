#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sumLastDigits(int a, int b){
    
    printf("The sum of last digits is: %d",a+b);
           return 0;
}

int main() {


    int f,s;
    scanf("%d %d",&f,&s);
    sumLastDigits(f%10,s%10);
    return 0;
}
