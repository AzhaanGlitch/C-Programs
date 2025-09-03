#include <stdio.h>
#include <ctype.h>

int isValidPassword(const char *password) {
    int hasUpperCase = 0;
    int hasLowerCase = 0;
    int hasDigit = 0;
    int hasPunctuation = 0;

    for (int i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i])) {
            hasUpperCase = 1;
        } else if (islower(password[i])) {
            hasLowerCase = 1;
        } else if (isdigit(password[i])) {
            hasDigit = 1;
        } else if (ispunct(password[i])) {
            hasPunctuation = 1;
        }
    }

    return (hasUpperCase && hasLowerCase && hasDigit && hasPunctuation);
}

int main() {
    char password[50];
    printf("Enter your password: ");
    scanf("%s", password);

    if (isValidPassword(password)) {
        printf("Password is valid.\n");
    } else {
        printf("Invalid password. Include at least one uppercase letter, one lowercase letter, one digit, and one punctuation mark.\n");
    }

    return 0;
}
