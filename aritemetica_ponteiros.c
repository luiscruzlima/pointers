#include <stdio.h>
 
 int main()
 {
    //declaração de um vetor ou array
    int v[5]= {11, 22, 33, 44, 55};

    //declaração de um apontador e igualar a NULL

    int* ptr = NULL;

    //atribuir o endereço de v[0] a ptr

    ptr = v;

    for (int i = 0; i < 5; i++)
    {
        printf("O endereço de v[%d] = %p\n", i, ptr);
        printf("O valor de v[%d] (%d) = Valor de ptr no endereço %p (%d)\n", i, v[i], ptr, *ptr);
        ptr++;
    }
    
 }