#include <stdio.h>

int main() {

    int age; 

    printf("\n Enter your age: ");
    scanf("%d", &age); 

    if (age < 0) {
        printf("You haven't even been born yet, LOL :)");
    }
    else if (age > 100) {
        printf("You are too old pal :)");
    }
    else if (age >= 18) {
        printf("You are now signed up. Congrats!");
    }
    else {
        printf("You are too young to sign up. Sorry!");
    }

    return 0;
}
