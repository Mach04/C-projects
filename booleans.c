#include <stdio.h>
#include <stdbool.h>

bool White_milk = true;
bool Black_milk = false;

int a = 10;
int b = 11;

int main ()
{
    printf("Is the milk white? %i\n", White_milk);
    int c = a < b;
    printf("a greater than b ? %d", c);
    return 0;
}
