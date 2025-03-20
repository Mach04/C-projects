#include <stdio.h>

int main() {
//1 club eligibility    
int Myage = 20;
int Club_age = 18;
if (Myage < Club_age) {
    printf("You are not eligible to join the club.\n");
}else{
    printf("You can enter the Club\n");
}

//2 comparing numbers
int a = 216;
int b = 12;
if (a > b){
    printf("a is bigger ");
}else if (a < b ){
    printf("a is smaller");
}else{
    printf("they are equal");
}

printf("\n");

//3 short hand if else
int year = 2005; 
(year > 2006) ? printf("you are smaller than me") : printf("You are older!");

printf("\n");
// even or odd
int x = 16;
if (x % 2 == 0){
    printf("%d is even", x);
}else{
    printf("%i is odd", x);
}

printf("\n");

// telefon password 
int my_password = 0404;
int you_entered = 0400;

if (you_entered == my_password){
    printf("Welcome");
}else if (you_entered == 0400){ 
    printf("You are very close");
}else
    printf("Wrong password");
return 0;

}

