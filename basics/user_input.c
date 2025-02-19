#include <stdio.h>

int main(){

    int age;
    char name[25]; 

    printf("What is your name: ");
    scanf("%s", &name);

    printf("How old are you: ");
    scanf("%d", &age);


    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age); 
    
    return 0; 

}

