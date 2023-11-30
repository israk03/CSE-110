// to check whether a given number is an Armstrong number or not

#include<stdio.h>
#include<math.h>

int count(int num){
    int count = 0;
    while(num!=0){
        num /= 10;
        count++;.
    }
    return count;
}

int is_armstrong(int num){
    int original = num;
    int digit;
    int sum = 0;
    int n = count(num);

    while(num!=0){
        digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }
    return (sum == original);
}

int main(){
    int a;
    printf("Enter any number : ");
    scanf("%d", &a);

    if(is_armstrong(a)){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }

    return 0;
}