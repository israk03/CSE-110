/* Write a program to generate Fibonacci series. */

#include<stdio.h>
int main(){
    int n, a, b, temp, i;
    printf("Please tell me how far you want? : ");
    scanf("%d", &n);

    a = 0;
    b = 1;
    
    printf("Fibonacci series: %d %d ", a, b);

    for(i=3; i<=n; i++){
        temp = a+b;
        printf("%d ", temp);

        a = b;
        b = temp;
    }
    return 0;
}