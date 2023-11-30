// the length of a string 

#include<stdio.h>
int main(){
    char str[100];
    int len;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while(str[len] != '\0'){
        len++;
    }

    printf("LENGTH = %d", len);

    return 0;
}