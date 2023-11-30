// the length of a string using a pointer 
#include<stdio.h>
int length(const char* str){
    const char* ptr = str;

    while(*ptr!='\0'){
        ptr++;
    }

    return ptr - str;
}

int main(){
    char s[60];
    scanf("%s", s);

    printf("LENGTH = %d", length(s));

    return 0;
}