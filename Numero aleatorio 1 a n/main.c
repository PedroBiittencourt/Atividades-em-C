    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>

    int numeroAleatorio (n) ;

    main() {

    int numero, aleatorio;
    printf ("Informe o numero maximo a ser gerado:") ;
    scanf ("%d", &numero);
    aleatorio = numeroAleatorio (numero) ;
    printf ("Numero entre 1 e %d: %d", numero, aleatorio ) ;
    getch ();
    return 0;

    }

    int numeroAleatorio (n) {

    int aleatorio ;
    srand (time(NULL)) ;
    aleatorio = 1+(rand()%n) ;
    return aleatorio ;

    }
