// count the total number of vowels or consonants in a string

#include <stdio.h>

int main() {
    char inputString[100];
    int vowels = 0, consonants = 0;

    // Input
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Count characters
    for (int i = 0; inputString[i] != '\0'; i++) {
        char currentChar = inputString[i];

        if ((currentChar >= 'A' && currentChar <= 'Z') || (currentChar >= 'a' && currentChar <= 'z')) {
            // Check if the current character is a vowel
            if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u' ||
                currentChar == 'A' || currentChar == 'E' || currentChar == 'I' || currentChar == 'O' || currentChar == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Display the result
    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

    return 0;
}
