#include <stdio.h>

int a = 7, b = 2; 

int main (){
    if (a >= 5 && b != 2){
        printf("Both statements are true!");    
    }else
        printf("FAlse");
        
    int module = a % b;
    float division = (float) a/b; // %i and %d are the same place holders for int
    printf("a = %d and b = %i\n", a,b);  
    printf("Module is %i\n", module);
    printf("Division is %.1f\n", division);
    printf("Increment of a by one is %i\n",++a); //increment by 1
    printf("Decrement of b by one  is %i\n", --b); //decrement by one

}

