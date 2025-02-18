#include <stdio.h>

void birthday(char name[],int age)
{
    printf("\n Happy birthday, %s.",name);
    printf("\n You are now %d years old.",age);

}

int main()
{
    char name[] = "Bro";
    int age = 22; 

    birthday(name, age);

    return 0;
}