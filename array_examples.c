#include <stdio.h>

int main (){

    int numbers [] = {1, 2, 9, 4, 5, 6, 7, 11, 99, 453};

    int length = sizeof (numbers) / sizeof (numbers [0]);
    
    int biggest_int = numbers[0];
    
    int i ;
     
    for (i = 0; i < length; i++){
        if (biggest_int < numbers[i]){
            biggest_int = numbers[i];
        }
    }
    printf("The bisset number from the array is %d", biggest_int);
            
}
    /*   int myArr[] = {12, 14 , 26, 45, 56, 78 };
    // finding the average of the numbers 
    int lenght = sizeof(myArr) / sizeof(myArr[0]); 
    float avg, sum = 0;    
    for (int i; i < lenght; i++) {
        sum = sum + myArr[i];
    }
    avg = sum / lenght;
    printf("The avarege of the numbers is: %.2f\n", avg);

 */

