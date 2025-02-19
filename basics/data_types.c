#include <stdio.h>
#include <stdbool.h>

int main(){

char a = 'C'; // single char %c
char b[] = "Bro"; // double char %s 

float c = 3.1456; // 4 bytes (32 bits of precision) 6-7 digits %f
double d = 3.342313255345; // 8 bytes (64 bits of precision) 15-16 digits %if 

bool e = true;  // 1 byte (T or F) %d 
char f = 100;  // 1 byte (-128 to 127) %d or %c 

// unsigned char on hold positive values (0-255) if we go beyond, it will overflow.

short int h = 32523; // 2 bytes (-32,768 to +32,767) %d
unsigned short int i = 65500; // 2 bytes (0 to +65,525) %d 

int j = 2147483647;  // 4 bytes (-2,147,483,648 to +2,147,483, 647) %d
unsigned int k = 4294967295L; // 4 bytes (0 to + 4,294, 967,295) %u



printf("%0.5f\n",c);
printf("%0.8lf\n",d);

printf("%c\n", f); // %c returns char as numeric based on ASCII table and %d return just the number 


return 0;

}
