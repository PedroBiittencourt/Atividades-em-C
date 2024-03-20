    #include <stdio.h>
    #include <stdlib.h>
    #include <Windows.h>

    int tempo (int x) ;

    int main() {

    int segundos ;
    printf ("Informe o tempo em segundos:") ;
    scanf ("%d", &segundos) ;
    tempo (segundos) ;
    return 0;

    }

    int tempo (int x) {

    int a;
    a = x ;
    printf ("Programa em estado de espera por %d segundos", a) ;
    sleep (a) ;

    return a;


    }
