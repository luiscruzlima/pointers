#include <stdio.h>

int main()
{
    int num = 5;
    int *p = &num;
    printf("Endereço usando (hexadecimal) %%p = %p\n",p);
    printf("Endereço usando (decimal) %%d = %d\n",p);
    printf("Endereço usando (octal) %%o = %o\n",p);

}