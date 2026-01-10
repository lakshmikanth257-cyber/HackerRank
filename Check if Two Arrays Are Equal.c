#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int n,s;
    scanf("%d",&n);
    

    int a1[n];
    
    
    for (int i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    scanf("%d",&s);
    int a2[s];
    
    for (int i=0;i<s;i++){
        scanf("%d",&a2[i]);
        
    }
    if(n!=s){
        printf("Not Equal");
        return 0;
    }

    for (int i=0;i<n;i++){
        if (a1[i]!=a2[i]){
            printf("Not Equal");
            return 0;
        } 
        
    }
    printf("Equal");
     
    return 0;
}
