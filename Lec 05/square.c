// // Function to calculate the square of a number

#include<stdio.h>

double square(int a){
    return a * a;
}

int main(){
    double n, res;
    printf("Enter the number: ");
    scanf("%lf", &n);

    res = square(n);

    printf("The square of this number is = %.2lf", res);

    return 0;
}