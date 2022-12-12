#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    *ptr = 1;
    printf("%d\n", *ptr); /* prints 1 */
    free(ptr);          /* deallocation */
    *ptr = 5;
    printf("%d\n", *ptr); /* may or may not print 5 */

    return 0;
}