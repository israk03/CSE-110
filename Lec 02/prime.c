/* Write a program to check whether the given input is prime or not. */
#include<stdio.h>
int main(){
    int a, i, count =0;
    printf("Please enter any number: ");
    scanf("%d", &a);

    for(i=2; i<a; i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==0 && a!=1){
        printf("The given number is prime.");
    }
    else{
        printf("The given number is not prime.");
    }
    return 0;
}