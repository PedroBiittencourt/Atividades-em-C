            #include <stdio.h>
            #include <stdlib.h>
            #include <math.h>

            typedef struct {
            float raiz1, raiz2 ;
            int tipoRaiz;
            } Funcao ;

            Funcao calculaFuncao (float y, float a, float b, float c);

            main() {

            float y, a, b, c ;

            printf ("A funcao sera: y= a2 + b + c\n") ;
            printf ("\nInforme o valor de y:") ;
            scanf ("%f", &y) ;
            printf ("Informe o valor da variavel a:") ;
            scanf ("%f", &a) ;
            printf ("Informe o valor da variavel b:") ;
            scanf ("%f", &b) ;
            printf ("Informe o da valor da variavel c:") ;
            scanf ("%f", &c) ;

            Funcao resultado = calculaFuncao (y, a, b, c) ;

            if (resultado.tipoRaiz == 0) {
                printf ("\nA funcao nao possui raizes reais.") ;
            }
            if (resultado.tipoRaiz == 1) {
                printf ("\nA funcao possui duas raizes reais identicas, de resultado igual a %.2f", resultado.raiz1) ;
            }
            else {
                printf ("\n A funcao possui duas raizes reais distintas: %.2f e %.2f", resultado.raiz1, resultado.raiz2);
            }

            getch () ;

            return 0;

            }



            Funcao calculaFuncao (float y, float a, float b, float c) {

            Funcao funcao;

            c = (-1 * y) + c ;

            float delta = (b * b) - (4 * (a * c)) ;

            funcao.raiz1 =((-1 * b) + sqrt(delta)) / (2 * a) ;
            funcao.raiz2 = ((-1 * b) - sqrt(delta)) / (2 * a) ;

            if (delta < 0) {
                funcao.tipoRaiz = 0 ;
            }
            if (delta = 0) {
                funcao.tipoRaiz = 1 ;
            }
            else {
                funcao.tipoRaiz = 2 ;
            }

            return funcao;

            }
