        #include <stdio.h>
        #include <stdlib.h>
        #include <locale.h>
        #include <math.h>

        int triangulo (int lado1, int lado2, int lado3);

         main() {

          setlocale (LC_ALL, "Portuguese");

          int t1, t2, t3, resultado;

          printf ("Informe os valores inteiros para cada lado do triangulo:\n") ;
          printf ("\nLado 1:") ;
          scanf ("%d", &t1) ;
          printf ("Lado 2:") ;
          scanf ("%d", &t2) ;
          printf ("Lado 3:") ;
          scanf ("%d", &t3) ;

          resultado = triangulo (t1, t2, t3);

          if (resultado == 0) {
            printf ("\nNão é triangulo.");
          }
          if (resultado == 1) {
            printf ("\nÉ triangulo, e é escaleno") ;
          }
          if (resultado == 2) {
            printf ("\nÉ triangulo, e é isoceles ") ;
          }
          if (resultado == 3) {
            printf ("\nÉ triangulo, e é equilatero") ;
          }

           getch () ;

        }

        int triangulo (int lado1, int lado2, int lado3) {


        if ((abs(lado1 - lado2) > lado3 && (lado1 + lado2) > lado3) || (abs(lado2 - lado3) > lado1 && (lado2 + lado3) > lado1) || (abs(lado1 - lado3) > lado2 && (lado1 + lado3) > lado2) || (lado1 <= 0 || lado2 <= 0 || lado3 <= 0)) {
            return 0;
        }


            if ((lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3)) {
                return 1;
            }

            if (((lado1 == lado2) && (lado1 != lado3)) || ((lado1 == lado3) && (lado1 != lado2)) || ((lado3 == lado2) && (lado1 != lado3))) {
                return 2;
            }
            if ((lado1 == lado2) && (lado1 == lado3)) {
                return 3;

        }

        }


