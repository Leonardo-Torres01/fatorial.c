#include <stdio.h>
#include "function_fatorial.c"

int main( int argc, char *argv[]) 
   {
    int numero = *argv[1] - 48;

    if (numero < 0) 
    {
        printf("Nao existe fatorial de numero negativo.\n");
    } 
    else 
    {
        printf("O fatorial de %d e: %d\n", numero,fatorial(numero));
    }

   
    printf("Criado por Leonardo Torres"); 
    return 0;
}
