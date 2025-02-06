#include <stdio.h> 

int main(){ 

    int x;  // declaration 
    x = 123;  // initialization 

    int y = 321; // declaration + initialization 

    int age = 21;  // int 
    float gpa = 2.04; // float 
    char grade = 'C'; // singel character
    char name[] = "quicksilver"; // array of characters 


    printf("Hi %s\n", name); // %s treats corresponding args as string
    printf("You are %d years old \n", age); // %d treats args as integer
    printf("Your avg grade is: %c\n",grade); // %c treats args as char
    printf("Your CGPA is: %f\n", gpa); // %f treats args as float

}