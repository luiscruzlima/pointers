#include <stdio.h>

int main()
{
    int v[2][3] = {{11, 22, 33}, {44, 55, 66}}; //declaraão de array - matriz com duas linhas e três colunas
     //declaração de um apontador ptr para um inteiro;

    int *ptr = &v[0][0]; //atribuição do endereço do primeiro elemento do array ao apontador ptr

    /*escrever todos os elemento do array atraves da aritemética de apontadores*/

    for (int i = 0; i < 6; i++) // ciclo para correr as linhas e colunas (linhas X coluna - 2 X 3 = 6)
    {
        if (i == 2 || i == 5)
            printf("%d\n", *(ptr +i));//quebra de linha nos casos em que o indice é igual ao fim da linha
        else
            printf("%d ", *(ptr +i));        
    }
return 0;
}