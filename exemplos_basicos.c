#include <stdio.h>

int main(int argc, char **argv)
{
    char str1[]="Hello World!";
    printf("%s %c %d %d %d Null Character - %c\nEm formato Hexadecimal: %p\n",
             str1, str1[0], &str1, &str1[0], str1, str1[12], str1);

    // outro exemplo
    char str2[]="Exemplo de uma string clássica!";
    char *ptrstr = "Exemplo da atribuição de uma string a um pointer!";
    /*ptrstr = &str2; // comentar este pedaço para perceber as diferenças.*/
    printf("&str2 - %p , str2 - %p , str2 - %s\n", &str2, str2, str2 );
    printf("&ptrstr - %p , ptrstr - %p , ptrstr - %s\n", &ptrstr, ptrstr, ptrstr );
    return 0;
}