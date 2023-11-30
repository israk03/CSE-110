// swap elements using call by reference

#include<stdio.h>

void swapp(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp; 
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    swapp(&a, &b);

    printf("%d %d", a, b);

    return 0;
}