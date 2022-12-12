/*programa para calcular média usando malloc*/

#include <stdio.h>
#include <stdlib.h>

void media(int n)
{
    int *ptr;
    int valInt;
    int somaTotal = 0;
    float valormedio;
    ptr = (int*)malloc(n*sizeof(int));
    if (ptr == NULL) 
    {
        printf("Memoria não alocada.\n");
        exit(0);
    }
    else
    {
        for(int j = 0; j < n ; j++)
        {
            printf("Introduza os elementos um a um: ");
            scanf("%d", &valInt);
            ptr[j] = valInt;
        }
        for(int k = 0; k < n ; k++)
        {
            somaTotal += ptr[k];
        }
    }
    valormedio = somaTotal / n;
    printf("A média dos valores introduzidos é %.2lf\n", valormedio);
}

int main()
{
    int n;
    printf("Introduza o numero de elementos: ");
    scanf("%d", &n);    
    media(n);
    return 0;
}