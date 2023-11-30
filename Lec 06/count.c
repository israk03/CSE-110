// count the total number of alphabets, digits, and special characters in a string 

#include <stdio.h>

int main() {
    char inputString[100];
    int alphabets = 0, digits = 0, specialChars = 0;

    // Input
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Count characters
    for (int i = 0; inputString[i] != '\0'; i++) {
        if ((inputString[i] >= 'A' && inputString[i] <= 'Z') || (inputString[i] >= 'a' && inputString[i] <= 'z')) {
            alphabets++;
        } else if (inputString[i] >= '0' && inputString[i] <= '9') {
            digits++;
        } else {
            specialChars++;
        }
    }

    // Display the result
    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", specialChars);

    return 0;
}
