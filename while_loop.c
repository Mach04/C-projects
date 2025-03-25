#include <stdio.h>


int main(){

    printf("COUNTING NUMBERS\n"); 
    int i = 0; 
    while (i < 6){
        printf("%d\n", i++); 
    }

    printf("REVERSE COUNTING NUMBERS\n");
    int n = 5;
    while (n >= 0){
        printf("%d\n", n);
        n -= 1;
    }
    printf("\n");

    printf("PRINTING WORDS SEVERAL TIMES\n");
    int j = 1;
    while (j <= 3){
        printf("%d: Hi, Mach 04\n", j);
        j ++;
    }

    printf("GUESING NUMBER\n");
    int guess_num = 9;
    int guess = 0;
    while (guess < guess_num){
        printf("What is the number ??\n");
        if (guess <= 5){
            printf("%d - Too small\n ", guess);
        }else if (guess > 5 && guess <= 10){
            printf("%d - You almost found it!\n", guess);
        }else
            printf("Too far\n");
        guess++;
    }
    printf("%d - You got it !\n", guess_num);



    printf( "REVERSE NUMBER\n");
    int numbers = 54321;
    int reverse_number = 0;

    while (numbers){
        //taking the last digit and appending it to reverse variable
        reverse_number = (reverse_number * 10) + (numbers % 10);
        
        //removing the last digit every time the loop iterates.
        numbers /= 10;
    }
    printf("%d\n", reverse_number);

    
    printf("FINDING CORRECT NUMBER  THROUGH THE LOOP\n");
    int z = 0;
    while (z <= 5){
        if (z < 5){
            printf("Oh, No!\n");
        }else
            printf("OH, YES!\n");
        z = z + 1;
    }

    printf("DO WHILE LOOP\n");
    int t = 5;
    // do while loop iterates at least once even the condition is false.
    do
    {
        printf("Mach 04", t);
        t = t - 1;
    } while (t > 5);
    


}
