/*programa para troca de dois valores.
a função recebe os valores por referencia e por isso estes são alterado na função main*/

#include <stdio.h>
void troca(int *p, int *i)
{
    int temp;
    temp = *p;
    *p = *i;
    *i = temp;
}

int main()
{
    int a, b, num1;
    printf("Insira dois valores inteiros para trocar: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Os valores antes de serem trocados são: a - %d, b - %d\n", a, b);
    troca (&a, &b);
    printf("Os valores depois de trocados são: a - %d ; b - %d\n", a, b);
    return 0;
}