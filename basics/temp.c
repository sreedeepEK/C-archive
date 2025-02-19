#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\n Is the tempature in (F) or (C)? ");
    scanf("%c", &unit); 

    unit = toupper(unit);

    if (unit == 'C'){

        printf("Enter the temp in Celcius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32 ;

        printf("\n The temp in farenheit is: %.1f", temp);

    }

    else if (unit == 'F'){
        printf("Enter the temp in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        
        printf("\n The temp in celcius is: %.1f", temp);
    }

    else{
        printf("\n %c is not a valid unit of measurement", unit);

    }
    return 0;
}