// compare two strings without using string library function.

#include<stdio.h>

int main(){
    char str1[50], str2[50];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    int isequal = 1;

    for(int i=0; str1[i] != '\0' || str2[i] != '\0'; i++){
        if(str1[i] != str2[i]){
            isequal = 0;
        }
    }

    if(isequal){
        printf("equal");
    }
    else{
        printf("not equal");
    }

    return 0;
}