// individual characters of a string in reverse order

#include<stdio.h>

int main(){
    char str[100];

    printf("Enter your string : ");
    fgets(str, sizeof(str), stdin);

    int i;

    printf("REVERSE ORDER: ");
    for(i=0; str[i] != '\0'; i++){
       
    }
    
    for(int j=i-1; j>=0; j--){
        printf("%c ", str[j]);
    }
    
    return 0;
}