            #include <stdio.h>
            #include <stdlib.h>

            struct estrutura {
               int matricula, faltas;
               float n1, n2;
                } ;

            typedef struct estrutura Aluno;

             void leSituacao (Aluno aluno) ;

             main(){

            Aluno aluno;

            printf ("Numero da matricula: ") ;
            scanf ("%d", &aluno.matricula) ;
            printf ("Informe sua nota 1: ") ;
            scanf ("%f", &aluno.n1);
            printf ("Informe sua nota 2: ") ;
            scanf ("%f", &aluno.n2);
            printf ("Informe sua quantidade de faltas: ") ;
            scanf ("%d", &aluno.faltas) ;

            leSituacao (aluno);

            getch () ;

            return 0;

            }

            void leSituacao (Aluno aluno) {


            printf ("\nAluno %d, suas notas:\n", aluno.matricula) ;
            printf ("Nota 1: %.2f\n", aluno.n1) ;
            printf ("Nota 2: %.2f\n", aluno.n2) ;
            printf ("Quantidade de faltas: %d\n", aluno.faltas) ;

            if ((aluno.n1 + aluno.n2) / 2 >= 6 && aluno.faltas < 15 ) {
                printf ("Voce esta aprovado!") ;
            }
            else {
                printf ("Voce esta reprovado!") ;
            }
            return ;

            }
