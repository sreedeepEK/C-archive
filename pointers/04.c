#include <stdio.h>

int main(){


    int arr[] = {22,12,3,4,56};
    int* ptr = arr; // ptr points to the first element of the arr (default in C)

   // printf("Position one: %d\n", *ptr); 


    for (int i = 0; i<5; i++) {
        printf("Array number %d",*ptr);
        printf("Memory address:%p\n", ptr);
        ptr++;
    }
}