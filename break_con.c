#include <stdio.h>

int main ()
{
    int i = 0;
    for (i; i < 10; i++){
        if (i == 5){
            continue; // skip number 5
        }else if (i == 8){
            break; // when equal to 8 break the loop 
        }
        printf("%d\n", i);
    }

}