/* If a ** digit number is input through the keyboard,
write a program to obtain the sum of the first and last digit
of this number. */

#include<stdio.h>
int main(){
    int num, first, last, temp;
    printf("Please enter a digit: ");
    scanf("%d", &num);

    last = num % 10;

    temp = num;
    while(temp>=10){
        temp /= 10;
    }
    first = temp;

    int sum = first + last; 
    printf("SUM = %d", sum);

    return 0;
}