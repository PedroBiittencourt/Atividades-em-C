#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media ;
    int peso1, peso2, peso3 ;
    peso1= 2 ;
    peso2 = 3 ;
    peso3 = 5 ;
    printf("Nota 1:");
    scanf ("%f", &nota1) ;
    printf ("Nota 2:") ;
    scanf ("%f", &nota2) ;
    printf ("Nota 3:") ;
    scanf ("%f", &nota3) ;
    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / (peso1 + peso2 + peso3) ;
    printf ("Media ponderada: %f", media) ;

    getch () ;
    return 0;
}
