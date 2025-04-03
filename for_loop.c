#include <stdio.h>
int main(){
    printf("NASTED 4*4 LOOP\n");
    int i, j;
     
    for (i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 4; j++){
            printf("Mach ");
        }
        printf("\n");
    }
    printf("\n");


    // multiplication table for number 6;
    int number = 6;
    int z;
    for (z = 1; z <= 10; z++){
        printf("%d x %d = %d\n", number, z, z * number);
    }
    printf("\n");

    // multiplication table for numbers 1 to 10

    int size = 10; // size of the multiplication table
    //outer loop for rows
    for (int m = 1; m <= 10; m++) {
        //inner loop for columns
        for (int k = 1; k <= 10; k++) {
            printf("%4d", m * k);
        }
        printf("\n");
    }
    printf("\n");
    
    //printing asteriks.
    int rows = 5;

    for (int a = 1; a <= rows; a++)
    {
        for (int b = 4; b >= a; b--) {
            printf("-");
        }
        for (int c = 1; c <= a; c++) {
            printf("*");
        }
        printf("\n") ;
    
    }

}

/*
....*    *****
...**    ****
..***    ***
.****    **
*****    *
*        *
**        
***      ****
****      ***
*****      **
            *
         

         */