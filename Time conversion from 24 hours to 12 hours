#include <stdio.h>

int time_calculate(int hour) {
    if (hour == 0) {
        return 12;
    }
    
    else if (hour >= 1 && hour <= 12) {
        return hour;
    }
    
    else {
        return hour-12;
    }
}

int main() {
    int hour_input, minute_input;
    scanf("%d %d", &hour_input, &minute_input);

    const char *time_format;

    if (hour_input >= 12) {
        time_format = "PM";
    } else {
        time_format = "AM";
    }

    int hour_return = time_calculate(hour_input);

    printf("%d:%02d %s\n", hour_return, minute_input, time_format);

    return 0;
}
