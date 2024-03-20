        #include <stdio.h>
        #include <stdlib.h>
        #include <time.h>

        int aleatorio (int a) ;

        main () {
        int numero;
        printf ("Numero aleatorio entre 1 e 6: %d", aleatorio (numero)) ;
        getch ();
        return 0 ;

        }

        int aleatorio (int a) {

        srand (time(NULL)) ;
        a = 1+(rand()%6) ;
        return a;


        }

