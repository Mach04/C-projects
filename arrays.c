#include <stdio.h>

int main()
{
/*     int myNumbers[] = {11, 24, 35, 45, 67, 86};
    
    sizeof(myNumbers);
    printf("%lu\n", sizeof(myNumbers)); // 24 bytes - 24/4 = 6, so there are 6 elements in the array
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    printf("The length of the array is %d\n", length);
    
    int grades[5] = {1, 2, 3, 7, 5}; 
    printf("Second value of the array is %d\n", grades[1]);
    grades[3] = 4; //changing the value in array
    printf("%d", grades[3]);

 */
    int matrix[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10}};

    int i, j;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 4; j++){
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }
}