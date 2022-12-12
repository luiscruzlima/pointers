#include <stdio.h>

int main()
{
    void *pointer = NULL;
    int number = 54;
    char alphabet ='z';
    pointer = &number;

    /*printf("The value of number = ", *pointer);  Compilation Error */

    /* Correct Method */
    printf("The value of number = %d\n", *(int *)pointer); /* prints "The value at number = 54" */

    pointer = &alphabet;

    /*printf("The value of alphabet = ", *pointer);          Compilation Error */
    printf("The value of alphabet = %c\n", *(char *)pointer); /* prints "The value at alphabet = z */
}