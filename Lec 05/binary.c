// Function to convert decimal to binary

#include<stdio.h>

void find_binary(int a){
    if(a > 1){
        find_binary(a / 2);
    }
    printf("%d", a % 2);
}

int main(){
    int dec;
    scanf("%d", &dec);

    printf("Binary: ");
    find_binary(dec);

    return 0;
}