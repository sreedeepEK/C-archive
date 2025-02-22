#include <stdio.h>

int main()
{

    char cars[][10] = {"Mustang", "Corvette", "BMW"}; // array of strings
    
    
    // continue the loop until how many elements are within array.
     
    for(int i=0; i < sizeof(cars) / sizeof(cars[0]); i++){

        printf("%s\n", cars[i]);
    }
    return 0;
}