// Prática 9 - Funções void e tipadas
// Yasmin Katerine Beer Zebrowski
// Turma K

// Problema 2

#include <stdio.h>
#include <math.h>


int maior_inteiro(float x, char indicador){

    int n = -1; //comeca primeiro laco com n = 0.
    float soma = 0;

    if(indicador=='Q' || indicador=='q')
    {
        while(soma<=x)
        {
            n++;
            soma += powf(n, 2);
        }

        return n-1; //elimina último termo
    }

    else if(indicador=='L' || indicador=='l')
    {
        while(soma<=x)
        {
            n++;
            soma += n;
        }

        return n-1; //elimina último termo
    }

    else
        return -1;
}


int main(){

    float x;
    int n;
    char indicador;

    printf("\n\n\tEntre o valor de x positivo: ");
    scanf("%f", &x);

    printf("\n\tEntre o indicador (L ou Q): ");
    scanf(" %c", &indicador);

    n = maior_inteiro(x, indicador);

    if(n==-1)
        printf("\n\tCodigo invalido\n");

    else
        printf("\n\tO valor de n eh %d\n\n", n);

    return 0;
}
