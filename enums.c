#include <stdio.h>

enum Day{Sun=1, Mon=2, Tue=3, Wed=4, Fri=5};

int main()
{
    // enum = user defined typed of named integer identifiers.
    enum Day today = Sun; // 
    
if(today == 1 || today == 7) // We have set sun = 1
{
    printf("It is a weekend");
}
else
{
    printf("It is not a  weekend");

}
return 0; 
}
