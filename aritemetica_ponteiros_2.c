#include <stdio.h>

int main()
{
    
    int v[3]={11, 22, 33};
    int* ptr = NULL;
    ptr = v;
    
    printf("O valor do vetro v no indice 1 = %d\n", v[1]);
    
    printf("O valor do ponteiro ptr + 1 = %d\n", *(ptr + 1));

    return 0;
}