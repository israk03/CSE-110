// count the total number of words in a string.

#include<stdio.h>

int main() {
    char str[1000];
    int words = 0;
    int isWord = 0;

    printf("Enter your text: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!isWord) {
                words++;
                isWord = 1;
            }
        } else {
            isWord = 0;
        }
    }

    printf("Total number of words: %d", words);

    return 0;
}
