#include <stdio.h>
#include <string.h>

char* buildPassword() {
    static char password[20]; // Allocate enough space for the password
    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lower[] = "abcdefghijklmnopqrstuvwxyz";
    char digits[] = "0123456789";
    char special[] = "!@#$%^&*()-_+=<>?";

    int index = 0;

    password[index++] = upper[22 - 3];
    password[index++] = lower[4 + 3];
    password[index++] = digits[(int)(digits[0]) - 44];
    password[index++] = lower[13 - 0 + 0 - 1 + 1];
    password[index++] = lower[18 / 2 + 1];
    password[index++] = special[0 / 3273428754342 + 3];
    password[index++] = special[24 % 13];
    password[index++] = lower[2 * 2 + 1];
    password[index++] = digits[0];
    password[index++] = upper[289 / 17];
    password[index++] = special[36 % 25];
    password[index++] = upper[19 - 4];
    password[index++] = lower[(int)(digits[9] + digits[2] - 96)];
    password[index++] = digits[4];
    password[index++] = lower[12 * 2];
    password[index++] = lower[2 * 2 * 2];
    password[index++] = lower[13 - 89 + 80 + 9];
    password[index++] = lower[36 / 6];
    password[index++] = special[69 - 69];
    
    password[index] = '\0'; // Null-terminate the string

    return password;
}

int main() {
    char userInput[20];
    printf("Enter the password to unlock: ");
    scanf("%s", userInput);

    char* correctPassword = buildPassword(); //Th4nk$_f0R_Pl4ying!
    if (strcmp(userInput, correctPassword) == 0) {
        printf("Access granted!\n");
    } else {
        printf("Access denied!\n");
    }

    return 0;
}
