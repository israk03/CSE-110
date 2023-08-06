/* Write a program to count numbers of digit in a given number. */
#include<stdio.h>
int main(){

    int num, count=0;
    printf("Please enter any integer number: ");
    scanf("%d", &num);

    if(num==0){
        count = 1;
    }
    else{
        while(num!=0){
            num = num / 10;
            count++;
        }
    }
    printf("Total digit %d.\n", count);

    return 0;
}
