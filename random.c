#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int number1 = rand() % 6;
    printf("%d", number1);

    return 0; 
}