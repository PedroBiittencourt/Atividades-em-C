        #include <stdio.h>
        #include <stdlib.h>

        int calculaQuinzena (int dia) ;

        main () {

        int dia, resultado;
        printf ("Informe o dia do mes:")  ;
        scanf ("%d", &dia) ;
        resultado = calculaQuinzena (dia) ;
        if (resultado == 0) {
            printf ("Dia invalido") ;
        }
        if (resultado == 1) {
            printf ("Primeira quinzena");
        }
        if (resultado == 2) {
            printf ("Segunda quinzena");
        }

        getch ();
        return 0;

        }

        int calculaQuinzena (int dia) {

        if (dia<1 || dia>31) {
            return 0;
        } else {

        if (dia>=1 && dia<=15) {
        return 1;
        } else {
        return 2;
        }

        }

        }
