/* Write a C program to check whether an alphabet is vowel or consonant using switch case. */

#include<stdio.h>
int main(){
    char ch;
    printf("Please enter an alphabet: ");
    scanf("%c", &ch);

    switch(ch){
        case 'a':
            printf("Entered alphabet is vowel.");
            break;
        case 'e':
            printf("Entered alphabet is vowel.");
            break;
        case 'i':
            printf("Entered alphabet is vowel.");
            break;
        case 'o':
            printf("Entered alphabet is vowel.");
            break;
        case 'u':
            printf("Entered alphabet is vowel.");
            break;
        case 'A':
            printf("Entered alphabet is vowel.");
            break;
        case 'E':
            printf("Entered alphabet is vowel.");
            break;
        case 'I':
            printf("Entered alphabet is vowel.");
            break;
        case 'O':
            printf("Entered alphabet is vowel.");
            break;
        case 'U':
            printf("Entered alphabet is vowel.");
            break;

        default:
            printf("Entered alphabet is consonant.");
    }
    return 0;
}