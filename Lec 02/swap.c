/* Write a program to swap the values of two variables without using a third variable. */
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    a = a^b;
    b = b^a;
    a = a^b;

    printf("%d %d", a, b);

    return 0;
}