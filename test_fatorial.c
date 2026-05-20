#include <stdio.h>
#include "function_fatorial.c"
#include <assert.h>

int main()  
     {
    assert(fatorial(0) == 1 && fatorial(1) == 1 && fatorial(6) == 720 );

    printf("Testes concluidos com sucesso!\n");
    
    printf("\nCriado por Leonardo Torres");
    return 0;
}
