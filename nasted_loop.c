#include <stdio.h>
int main (){
    int row = 5;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
        for (int k = 1; k <= i; k++)
        {
            printf(" ");
        }
    }   
}
/*
*****
-****
--***
---**
----*
*/