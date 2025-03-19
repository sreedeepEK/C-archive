#include <stdio.h>

int main()
{
  
    int num = 10;
    float fnum = 3.14;
    void* vptr; // A void pointer can hold the memory address of any data type.


    vptr = &num;
    printf("Integer: %d\n",*(int*)vptr); // output 10 -> after dereference
     

    vptr = &fnum;
    printf("Float: %.2f\n", *(float*)vptr); // output 3.14 after dereference
    
}