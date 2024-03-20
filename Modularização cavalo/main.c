#include <stdio.h>
#include <stdlib.h>

int ferraduraCavalo (cavalos) ;

    main () {

    int cavalos ;
    printf("Numero de cavalos:") ;
    scanf ("%d", &cavalos) ;
    printf ("Sao necessarias %d ferraduras", ferraduraCavalo (cavalos)) ;
    getch () ;
    return 0;
    }

    int ferraduraCavalo (cavalos) {

    int ferraduras ;
    ferraduras = cavalos * 4 ;
    return ferraduras;

    }
