// finding the largest element in an array using dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>

int large(int *arr, int size){
    int largest = arr[0];

    for(int i=0; i<size; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    return largest;

}

int main(){
    int *arr;
    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));

    if(arr == NULL){
        printf("FAILED");
        return 1;
    }

    printf("enter %d elements: ", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    int largee = large(arr, size);

    printf("LARGEST: %d", largee);

    free(arr);

    return 0;
}