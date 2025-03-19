#include <stdio.h>


int main()
{

    //pointer is variable like reference that holds a memory address to another variable. 
    // *= indirectional operator (value at address)


    int a = 10;
    int *p = &a;  // Pointer stores address of 'a'
    *p = 20;      // Modifies value of 'a' using pointer
    printf("%d", a); // Outputs: 20
    



    return 0;
}