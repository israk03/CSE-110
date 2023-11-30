// find the given times a given word “the” appears in the given string.

#include <stdio.h>
#include <string.h>

int main() {
    char inputString[1000];
    char wordToFind[] = "the";
    int occurrences = 0;

    // Input
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Count occurrences
    for (int i = 0; inputString[i] != '\0'; i++) {
        // Check for the occurrence of the wordToFind
        if (inputString[i] == wordToFind[0]) {
            int j;
            // Check if the next characters match the wordToFind
            for (j = 1; wordToFind[j] != '\0'; j++) {
                if (inputString[i + j] != wordToFind[j]) {
                    break;
                }
            }
            // If the loop completed, it means the wordToFind was found
            if (wordToFind[j] == '\0') {
                occurrences++;
            }
        }
    }

    // Display the result
    printf("The word \"%s\" appears %d times in the string.\n", wordToFind, occurrences);

    return 0;
}
