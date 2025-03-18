#include <stdio.h>
//double data type
int myint;
float myfloate;
double mydouble;
char mychar; 

double Mydoublefloat = 15.234354539861;

//type conversion 

int score = 80; 
float scoref = (float)score; // explicit type conversion

int main()
{
    printf("Double float: %.1f \n", Mydoublefloat); //%.1f only show 1 decimal place
    
    printf("Score is %.1f", scoref);
    
    printf("%lu\n", sizeof(myint));
    printf("%lu\n", sizeof(myfloate));
    printf("%lu\n", sizeof(mydouble));
    printf("%lu\n", sizeof(mychar));
    return 0;
}
//Double float variable stores more decimal points after the dot.

