#include <stdio.h>

#define LENGTH 3
int data[LENGTH];

int main(int argc, char **argv)
{
    int *pi; //pointer simples
    int **ppi; // pointer to a pointer to an int

    printf("Multiple indirection example\n");
    // ciclos para colocar valores no array e para os imprimir
    for (int i = 0; i < LENGTH; i++)
    {
        data[i] = i;
    }
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%d\n", data[i]);
    }
    
    /* ppi é uma variavel que aponta para um apontador de um inteiro*/

    pi = data; //atribui à variavel pi, que é um apontador, o endereço
               // de data, ou seja do seu primeiro elemento data[0] 
    ppi = &pi; //atribui à variavel ppi, que um apontador de um apontador, 
               // o endereço o apontador pi

    for (int i = 0; i < LENGTH; i++)
    {
        printf("\nCiclo[%d] - endereço de memória do array - %p", i, data);
        printf("O item apontado pelo apontador pi - %d\n", *pi);
        printf("O item apontado por ppi - %p\n", *ppi);
        printf("O item apontado pelo apontador de apontador ppi - %d\n\n", **ppi);
        printf("O endereço de pi é %p e o valor de pi (aquilo para onde aponta) é %p\n\n",&pi, ppi);
        pi += 1;
    }

/*outro exemplo*/

int i=5;
int *ptr = &i;
int **ptr2 = &ptr;
printf("*ptr = %d , no endereço %p\n", *ptr, ptr);
printf("**ptr2 = %d , no endereço %p\n",**ptr2, ptr2);

return 0;
}