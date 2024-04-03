        #include <stdio.h>
        #include <stdlib.h>

        void quinzenaMes (int dia, int mes) ;

        main()
        {
        int dia, mes;
        printf ("Informe o dia:") ;
        scanf ("%d", &dia) ;
        printf ("Informe o mes:") ;
        scanf ("%d", &mes) ;
        quinzenaMes (dia, mes) ;
        getch () ;
        }

        void quinzenaMes (int dia, int mes) {

        if (dia<1 || dia>31) {
            printf ("Dia invalido ");
        }
        if (dia>=1 && dia<=15) {
            printf ("Primeira quinzena ");
        }
        if (dia>=16 && dia<=31) {
            printf ("Segunda quinzena ");
        }

        switch (mes) {

        case 1: printf ("de Janeiro.");
                break;
        case 2: printf ("de Fevereiro.");
                break;
        case 3:
            printf("de Marco.");
            break;
        case 4:
            printf("de Abril.");
            break;
        case 5:
            printf("de Maio.");
            break;
        case 6:
            printf("de Junho.");
            break;
        case 7:
            printf("de Julho.");
            break;
        case 8:
            printf("de Agosto.");
            break;
        case 9:
            printf("de Setembro.");
            break;
        case 10:
            printf("de Outubro.");
            break;
        case 11:
            printf("de Novembro.");
            break;
        case 12:
            printf("de Dezembro.");
            break;
        default: printf ("e mes invalido")  ;
        }

        }
