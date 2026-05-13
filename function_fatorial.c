#include <stdio.h>

int fatorial(int n) 
   {
    if (n == 0 || n == 1)
     {
        return 1; 
     }
    
    int resultado = 1;
    for (int i = n; i > 1; i--) 
    {
        resultado *= i; 
    }
    return resultado;
}
