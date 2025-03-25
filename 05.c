#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[] = {12,24,36,40,50};

    //size_t
    size_t size = sizeof(arr) / sizeof(arr[0]);
    printf("Size of array: %zu bytes \n", size);

    return 0;
}