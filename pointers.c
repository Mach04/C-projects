#include <stdio.h>

int main(){
    /* int year = 2025;
    int* pYear = &year;

    int **ptr = &pYear;

    printf("Variable Year address: %p\n", &year);
    printf("Pointer to int address: %p\n", pYear);
    printf("Pointer to int value: %d,\n ", *pYear);
    printf("Pointer variable itself adress %p\n",&pYear);
    printf("pointer to pointer mem adress : %p,\n ", ptr);
    printf("pointer to pointer value : %d,\n ", **ptr);
    printf("Pointer to pointer itself adreess : %p\n", &ptr);
 */
    int nums[4] = {1, 2, 3, 4};
    int *(pNums)[4] = &nums; //pointing to all elements

    x int i = 0;
    printf("adress of the second element of the array :%p\n", &nums[1]);
    for (i; i < 4; i ++){
        printf("%d\n", *(pNums +i));
        
}
}
