        #include <stdio.h>
        #include <stdlib.h>

        int quadrante (int graus) ;

         main() {

        int graus, resultado;


        printf ("Informe o angulo:") ;
        scanf ("%d", &graus) ;
        resultado = quadrante (graus);

        if (resultado == 0) {
            printf ("Angulo invalido.") ;
        }
        if (resultado == 1) {
            printf ("O angulo de %d graus esta situado no primeiro quadrante.", graus) ;
        }
        if (resultado == 2) {
            printf ("O angulo de %d graus esta situado no segundo quadrante.", graus) ;
         }
         if (resultado == 3) {
            printf ("O angulo de %d graus esta situado no terceiro quadrante.", graus) ;
         }
         if (resultado == 4) {
            printf ("O angulo de %d graus esta situado no quarto quadrante.", graus) ;
         }

         getch ();
         return 0;

         }


         int quadrante (int graus) {

         if (graus<0 ) {
            return 0;
         }
         if (graus>=0 && graus<=90 || (graus % 360)>=0 && (graus % 360)<= 90) {
            return 1;
         }
         if (graus>90 && graus<=180 || (graus % 360)>90 && (graus % 360)<= 180) {
            return 2;
         }
         if (graus>180 && graus<=270 || (graus % 360)>180 && (graus % 360)<= 270) {
            return 3;
         }
         if (graus>270 && graus<=360 || (graus % 360)>270 && (graus % 360)<= 360) {
            return 4;
         }

         }
