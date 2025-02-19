#include <stdio.h>

// array - data structure that can store many values of same data type.
int main()
{


double prices[] = {5,10,15,20,25};

for(int i = 0; i<5; i++)
{
    printf("$%.2lf\n",prices[i]);
}

return 0 ;

}