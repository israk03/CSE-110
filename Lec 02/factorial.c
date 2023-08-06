/* Write a program to find factorial of a given number. */
#include<stdio.h>
int main()
{
    int a, i, res = 1;
    printf("Please enter any number: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        res = res*i;
    }
    printf("%d", res);

    return 0;
}