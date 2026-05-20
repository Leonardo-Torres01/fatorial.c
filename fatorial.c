#include <stdio.h>
#include "function_fatorial.c"
#include <stdlib.h>

int main( int argc, char *argv[]) 
   {
    int numero = atoi(argv[1]);

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
