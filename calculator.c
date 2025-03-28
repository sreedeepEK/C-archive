#include <stdio.h>

int main(){

    char operator; 
    double num1;
    double num2; 
    double result; 

    printf("\n Enter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("Enter the first number: ");
    scanf("%lf", &num1); 

    printf("Enter the second number: ");
    scanf("%lf", &num2); 


    switch (operator)
    {
    case '+':
        result = num1 + num2; 
        printf("\n result: %.2lf", result);
        break;

    case '-':
        result = num1 - num2; 
        printf("\n result: %.2lf", result);
        break;

    case '*':
        result = num1 * num2; 
        printf("\n result: %.2lf", result);
        break;

    case '/':
        result = num1 / num2; 
        printf("\n result: %.2lf", result);
        break;
    
    default:
        printf("%c is not a valid input", operator);
        break;
    }

    return 0; 
}