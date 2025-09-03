#include <stdio.h>

int main() {
    char name[20];
    int input_year, input_month, input_date;

    printf("Enter Candidate's Name: \n");
    scanf("%s", &name);

    // Input Year
    printf("Now, Enter details for DOB \n");
    printf("Enter a Year (between 1970 and 2024): ");
    scanf("%d", &input_year);
    if(input_year < 1970 || input_year > 2024) {
        printf("Invalid input. Please enter a year between 1970 and 2024.\n");
        return 1;
    }

    // Input Month
    printf("Enter a Month (between 1 and 12): ");
    scanf("%d", &input_month);
    if(input_month < 1 || input_month > 12) {
        printf("Invalid input. Please enter a month between 1 and 12.\n");
        return 1;
    }

    // Input Date
    printf("Enter a Date (between 1 and 31): ");
    scanf("%d", &input_date);
    if(input_date < 1 || input_date > 31) {
        printf("Invalid input. Please enter a date between 1 and 31.\n");
        return 1;
    }

    // Display the entered information
    printf("---------------------------------------------------------\n");
    printf("Candidate's Name: %s\n", name);
    printf("DOB: %04d-%02d-%02d\n", input_year, input_month, input_date);
    printf("---------------------------------------------------------\n");

    return 0;
}
