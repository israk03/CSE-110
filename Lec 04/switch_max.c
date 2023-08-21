/* Write a C program to find maximum between two numbers using switch case. */
#include<stdio.h>

int main(){
    int a,b;
    printf("Please enter two integer num: ");
    scanf("%d %d", &a, &b);

    switch(a>b){
        case 1:
            printf("%d is the largest.", a);
            break;
        case 0:
            printf("%d is the largest.", b);
            break;
        default:
            printf("Invalid input.");
    }
    return 0;
}