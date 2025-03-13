#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Allocate memory for 3 integers
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1; // Exit if allocation fails
    }

    // Assign values to the array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Allocate memory for 4 integers
    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list); // Free previously allocated memory
        return 1; // Exit if allocation fails
    }

    // Copy elements from list to tmp
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }

    // Print elements of the original list
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }

    // Free allocated memory
    free(list);
    free(tmp);

    return 0; 
}