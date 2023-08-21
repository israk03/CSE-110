/* C program to print day of week name using switch case. */

#include<stdio.h>
int main(){
    int a;
    printf("Please enter week number (1-7): ");
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("Week day: Sunday.");
            break;
        case 2:
            printf("Week day: Monday.");
            break;
        case 3:
            printf("Week day: Tuesday.");
            break;
        case 4:
            printf("Week day: Wednesday.");
            break;
        case 5:
            printf("Week day: Thursday.");
            break;
        case 6:
            printf("Week day: Friday.");
            break;
        case 7:
            printf("Week day: Saturday.");
            break;
        default:
            printf("Week number invalid.");
    }
    return 0;
}