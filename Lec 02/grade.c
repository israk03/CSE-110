/* Write a program to compute grade of students using if…else ladder. */

#include<stdio.h>
int main(){
    int marks;
    printf("Please enter your marks: ");
    scanf("%d", &marks);

    if(marks < 50){
        printf("Your grade is 'F'.");
    }
    else if(50 <= marks && marks < 60){
        printf("Your grade is 'C'.");
    }
    else if(60 <= marks && marks < 70){
        printf("Your grade is 'B'.");
    }
    else if(70 <= marks && marks < 80){
        printf("Your grade is 'B+'.");
    }
    else if(80 <= marks && marks < 90){
        printf("Your grade is 'A'.");
    }
    else if(90 <= marks && marks < 100){
        printf("Your grade is 'A+'.");
    }
    else{
        printf("Please enter valid marks.");
    }
    return 0;
}