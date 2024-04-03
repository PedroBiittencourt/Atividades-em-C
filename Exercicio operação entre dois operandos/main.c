        #include <stdio.h>
        #include <stdlib.h>

        float operacoes (float n1,float n2, char op) ;

        main() {

            float n1, n2, resultado;
            char op;

            printf ("Instrucoes:\n");
            printf ("\nSoma: +\n");
            printf ("Subtracao: -\n");
            printf ("Multiplicacao: *\n");
            printf ("Divisao: /\n") ;
            printf ("\nInforme o primeiro numero:") ;
            scanf ("%f", &n1) ;
            printf ("Informe o sinal da operacao que deseja efetuar:");
            op = getche ();
            printf ("\nInforme o segundo numero:") ;
            scanf ("%f", &n2) ;

             resultado = operacoes (n1, n2, op) ;

             printf ("\nResultado: %.2f", resultado);

             getch ();

             }


        float operacoes (float n1, float n2, char op) {

        switch (op) {

        case '+': return n1 + n2 ;
                break ;

        case '-': return n1 - n2;
                break;

        case '*': return n1 * n2 ;
                break;

        case '/': return (n1 / n2);
                break;

        default: printf ("\nSinal invalido.");

        }


        }
