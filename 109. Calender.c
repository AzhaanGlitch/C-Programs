#include <stdio.h>

#define TRUE 1
#define FALSE 0

int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char *months[] = {
    " ",
    "\n\n\nJanuary",
    "\n\n\nFebruary",
    "\n\n\nMarch",
    "\n\n\nApril",
    "\n\n\nMay",
    "\n\n\nJune",
    "\n\n\nJuly",
    "\n\n\nAugust",
    "\n\n\nSeptember",
    "\n\n\nOctober",
    "\n\n\nNovember",
    "\n\n\nDecember"
};

int input_year() {
    int year;
    printf("Please enter a Year : ");
    scanf("%d", &year);
    return year;
}

int determine_day_code(int year) {
    int day_code;
    int d1, d2, d3;
    d1 = (year - 1) / 4.0;
    d2 = (year - 1) / 100.0;
    d3 = (year - 1) / 400.0;
    day_code = (year + d1 - d2 + d3) % 7;
    return day_code;
}

int determine_leap_year(int year) {
    if ((year % 4 == FALSE && year % 100 != FALSE) || year % 400 == FALSE) {
        days_in_month[2] = 29;
        return TRUE;
    } else {
        days_in_month[2] = 28;
        return FALSE;
    }
}

void display_calendar(int year, int day_code) {
    int month, day;

    for (month = 1; month <= 12; month++) {
        printf("%s", months[month]);
        printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n");

        // Correct the position for the first date
        for (day = 1; day <= 1 + day_code * 5; day++) {
            printf(" ");
        }

        // Print all the dates for one month
        for (day = 1; day <= days_in_month[month]; day++) {
            printf("%2d", day);

            // Is the day before Saturday? If not, start a new line for Sunday.
            if ((day + day_code) % 7 > 0) {
                printf("   ");
            } else {
                printf("\n ");
            }
        }

        // Set position for next month
        day_code = (day_code + days_in_month[month]) % 7;
    }
}

int main(void) {
    int year, day_code;

    year = input_year();
    day_code = determine_day_code(year);
    determine_leap_year(year);
    display_calendar(year, day_code);

    printf("\n");
    return 0;
}
