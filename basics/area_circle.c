#include <stdio.h>

int main(){

    const double PI = 3.14434; 
    double radius;
    double circumference;
    double area;

    printf("\n Enter the radius of circle: ");
    scanf("%lf", &radius); 


    circumference = 2 * PI * radius;  
    area = PI * radius * radius;

    printf(" Circumference: %lf \n", circumference);
    printf("Area of the circle: %lf", area);

    return 0;


}