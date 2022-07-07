// Aula Prática 10 - Funções (parâmetros por referência)
// Yasmin Katerine Beer Zebrowski
// Turma K

// Problema 3

#include <stdio.h>
#include <ctype.h>

#define TAM 5

char le_s_n()
{
    char s_n;
    do
    {
        printf("\n\t Deseja continuar (S ou N)?");
        scanf(" %c", &s_n);
        s_n = toupper(s_n);

        if (s_n != 'S' && s_n != 'N' )
            printf("\n\tResposta invalida. ");

    } while (s_n != 'S' && s_n != 'N' );

     return s_n;

}


void troca(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


char conceito_final(int p1, int p2, int p3, int p4, int pfinal, float *mediafinal)
{

    //ordena do menor pro maior
    if(p1>p2)
        troca(&p1,&p2);

    if(p3>p4)
        troca(&p3,&p4);

    if(p1>p3)
        troca(&p1,&p3);

    if(p2>p4)
        troca(&p2,&p4);

    if(p2>p3)
        troca(&p2,&p3);


    //calculo media
    *mediafinal = (p2 + p3 + p4 + pfinal);

    //atribuição conceito
    if(*mediafinal>=85)
        return 'A';
    else if(*mediafinal>=70)
        return 'B';
    else if(*mediafinal>=50)
        return 'C';
    else
        return 'D';

}


int main()
{
    int prova1, prova2, prova3, prova4, provafinal;
    float mediafinal;
    char execute_again;
    char conceito;

    while(execute_again!='N')
    {
        printf("\n\tEntre com as 5 notas (4 provas mensais e uma prova final): ");
        scanf("%d %d %d %d %d", &prova1, &prova2, &prova3, &prova4, &provafinal);


        conceito = conceito_final(prova1, prova2, prova3, prova4, provafinal, &mediafinal);

        printf("\n\n\tSua media final eh %.0f e seu conceito eh %c", mediafinal, conceito);

        execute_again = le_s_n();

    }

    return 0;

}
