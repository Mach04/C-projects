#include <stdio.h>
int main(){
    int age;

    int memadress = 10;
    printf(" Memory address of variable memadress is %p\n", &memadress);
    
    /* char name[20]; // use scanf for only one word
    printf("What is your name?");
    scanf("%s", name);
    printf("How old are you?\n");
    scanf("%d", &age);
    if (age != 1){
        printf("invalid input\n");
    }
    printf("Welcome!%d years old Mach", age, name);
 */
    /* char login[10];
    int click;
    int norma = 250;
    
    printf("Enter your login, and your clicks for today. \n"); 
    scanf("%s \n%d", login, &click);
    if (click >= norma){
        printf("You do normal");
    }
    else if (click < norma){
        click = norma - click;
        printf("you need %d more clicks to do the norm", click);
    }else
        printf("wrong input");
 *//* 
    char intro[50];
    printf(" Write a brief description of yourself\n");
    fgets(intro, sizeof(intro), stdin);
    printf("you wrote :\n%s", intro); */

}