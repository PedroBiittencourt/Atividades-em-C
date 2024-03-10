#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero, expoente, potencia ;
    printf ("Numero:") ;
    scanf ("%d", &numero) ;
    printf ("Expoente:") ;
    scanf ("%d", &expoente) ;
    potencia = pow (numero, expoente) ;
    printf ("Resultado: %d", potencia ) ;

    getch () ;
    return 0;
}
