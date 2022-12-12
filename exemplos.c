#include <stdio.h>

int main()
{
    //declaração de um inteiro e de um pointer para um inteiro
    int num = 0;
    int *pi;
    pi = &num;

    printf("O endereço de num: %x e o seu valor:%d\n", &num, num);
    printf("O endereço de pi: %x e o seu valor:%d\n", &pi, pi);

    *pi = 123;
    printf("O valor agora de num é de %d\n", num);
}