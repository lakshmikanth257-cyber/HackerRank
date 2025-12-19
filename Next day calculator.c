#include <stdio.h>

int main() {
    int day, month, year;
    int isLeap;
    int maxDay;

    scanf("%d %d %d", &day, &month, &year);

    /* Step 1: Check leap year */
    if (year % 400 == 0) {
        isLeap = 1;
    } else {
        if (year % 100 == 0) {
            isLeap = 0;
        } else {
            if (year % 4 == 0) {
                isLeap = 1;
            } else {
                isLeap = 0;
            }
        }
    }


    if (month == 2) {
        if (isLeap) {
            maxDay = 29;
        } else {
            maxDay = 28;
        }
    } else {
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            maxDay = 30;
        } else {
            maxDay = 31;
        }
    }


    if (day < maxDay) {
        day = day + 1;
    } else {
        day = 1;
        if (month < 12) {
            month = month + 1;
        } else {
            month = 1;
            year = year + 1;
        }
    }


    printf("%02d-%02d-%d\n", day, month, year);

    return 0;
}
