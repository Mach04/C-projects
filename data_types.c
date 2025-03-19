#include <stdio.h>
//double data type
int myint;
float myfloate;
double mydouble;
char mychar; 

double Mydoublefloat = 15.234354539861;


//this constant variable will stay unchangable;
const int YEARofBIRTH = 2005;

int main()
{
    //trying to change the constant, but it will lead to an error;
    YEARofBIRTH = 2002;
    printf("My year of birth is about to change, but...");
    
    
    printf("Double float: %.1f \n", Mydoublefloat); //%.1f only show 1 decimal place
    
    printf("%lu\n", sizeof(myint));
    printf("%lu\n", sizeof(myfloate));
    printf("%lu\n", sizeof(mydouble));
    printf("%lu\n", sizeof(mychar));
    return 0;
}
//Double float variable stores more decimal points after the dot.

