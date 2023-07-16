#include <stdio.h>

void minmax(int a, int b, int *min, int *max)
{
    if (a>b)
    {
        *min=b;
        *max=a;
    }
    else
    {
        *min=a;
        *max=b;
    }
}
int main()
{
    int a,b;
    int min, max;
    printf("Introduza 2 valores separados por um espaço para saber qual o maior e o menor: ");
    scanf("%d %d", &a, &b);
    minmax(a,b,&min,&max);
    printf("\nO maior = %d e o menor = %d .\n", max, min);

}