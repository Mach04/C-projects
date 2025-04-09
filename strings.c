#include <stdio.h>
#include <string.h>

int main () {
    char greeting[50] = "Hello, World! ";
    char myname[50] = "I am Manuchehr Imomnazarov ";
    char midname[] = { 'M', 'A', 'C', 'H' , '\0',  }; // same as above variables 
    char a[] = "Aasdsd";
    char b[] = "A";
    int x = 10; 
    char sur1[] = "Imomnazarov";
    char surname[50] = " ";
   // printf("Strlen = %d\n", strlen(greeting));
    strncat(greeting, myname, 4);
    strncpy(surname, sur1, 4);
    
    printf("%d", strcmp(a, b));
    printf("%d\n %d", &a[1], &x); // addres of the array and variable  

    //printf("%s\n %d\n %d", surname, strlen(surname),strlen(midname));
    //printf("%s", greeting);

    /* printf("%s %s just %s ", greeting, myname, midname);
    printf("\nMy first letter is %c", midname[0]);
  */
    return 0;
}
/* strcpy(dest, src) – Copies string src into dest.

strncpy(dest, src, n) – Copies up to n characters of src into dest.

strcat(dest, src) – Appends src to dest.

strncat(dest, src, n) – Appends up to n characters of src to dest. 

strcmp(s1, s2) – Compares two strings lexicographically. // BY ASCII TABLE!

strncmp(s1, s2, n) – Compares up to n characters of two strings.
*/