    #include <stdio.h>
    #include <stdlib.h>

    int inverteNumero (int n) ;

    main() {

    int numero, numeroInvertido ;
    printf ("Informe o numero de 3 algarismos a ser invertido:") ;
    scanf ("%d", &numero) ;
    numeroInvertido = inverteNumero (numero) ;
    printf ("Numero invertido: %d", numeroInvertido ) ;
    getch () ;
    return 0;

    }

    int inverteNumero (int n) {

    int n1, n2, n3, inverso ;
    n1 = n % 10 ;
    n2 = (n % 100) / 10 ;
    n3 = n / 100 ;
    inverso = n1 * 100 ;
    inverso = inverso + (n2 * 10) ;
    inverso = inverso + n3 ;
    return inverso;

    }
