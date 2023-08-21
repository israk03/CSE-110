#include<stdio.h>
int main(){

    int num,i, count=0;
    printf("Please enter any integer number: ");
    scanf("%d", &num);

    for(i=0; i<num; i++){
        num = num/10;
        count ++;
    }
    printf("Total digit %d.\n", count);

    return 0;
}