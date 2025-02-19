// for loops : When you know exactly how many times you want to loop through a block of code, use the for loop


#include <stdio.h>

int main()
{
    for(int i = 10; i >=1; i-=1)
    {
        printf("%d\n",i);
    }
    
    return 0;
}


// while loops: we can execute a set of statements as long as a condition is true. 

#include <stdio.h>
#include <string.h>

int main()
{

    char name[25];
    printf("\n what is your name? ");
    fgets(name, 25,stdin); // use fgets when we need the code to write the entire line.
    name[strlen(name) - 1] = '\0';
    
    // \0: used to remove the extra space with void. often used to mark the end of a string. 

    while(strlen(name) == 0) 
    {
        printf("\n You can't proceed without writing the name.");
        printf("\n what is your name? ");
        fgets(name, 25,stdin);
        name[strlen(name) - 1] = '\0'; 
    }

    printf("Hello %s", name);
    return 0;

}


// do while loop: The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true. 

