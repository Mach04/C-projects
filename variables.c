#include <stdio.h>
/*three main types of variables in C:
int: integer
float: floating point number
char: character
*/
// type variableName = value;
int age = 20;
float weight = 75.6;
char gender = 'M';
float height; // variable declaration
  // variable assignment

int mynumb = 17;
int mynewnumb;

int x = 5;
int y = 7;

char a, b, c; // multiple variable declaration of the same tympe



int main ()
{
    mynumb = 11;   
    mynewnumb = mynumb; //assigne the value of mynum.. to mynew..
    height = 1.85;
    printf("Hi, I am %d years old \n", age); //format specifiers are just place holders 
    printf("My gender is :%c \n", gender);
    printf("I am %.2f meters tall and %f kg weight \n", height, weight );
    printf("I was born in %d \n", 2005); //printing values without variables
    
    printf("My new number is %d\n", mynewnumb);

    int sum = x + y;
    printf("The sum of x and y is %d \n", sum);

    a = 'A'; b = 'B'; c = 'C';
    printf("First three letters of alphabet are %c %c and %c\n", a, b, c);

    return 0; // here .2f is used to print 2 decimal places after the decimal point.
}
/* format specifiers      
integer %d 
char %c
float %f
*/


