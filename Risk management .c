#include <stdio.h>

int main() {
    int age,income,tolerance;
    scanf("%d\n %d\n %d",&age,&income,&tolerance);

    int con1,con2,con3;
    int a = 1;
    int b = 1;
    con1 = age < 30;
    con2 = ( age >= 30 && age <= 50 ) && ( income > 75000 ) && ( tolerance == 3 );
    con3 = ( age > 50 ) && ( income > 75000 ) && ( tolerance == 3 );
    if ( con1 || con2 || con3 ) {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
        a = 0;
    }
     
    con1 = ( age >= 30 && age <= 50 ) && ( income <= 75000 ) && ( tolerance == 2 );
    con2 = ( age >= 30 && age <= 50 ) && ( income > 75000 ) && !( tolerance == 3 );
    if ( ( con1 || con2 ) && a == 1 ) {
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
        b = 0;
    }

    con1 = ( age > 50 ) && !( income > 75000 && tolerance == 3  );
    con2 = ( income <= 30000 ) && !( tolerance == 3 );
    if ( ( con1 || con2 ) && a == 1 && b == 1 ) {
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    return 0;
}
