// Prática 11 – Programação Estruturada
// Yasmin Katerine Beer Zebrowski
// Turma K

// Problema 1 - Mega Sena

#include <stdio.h>

int avalia_aposta (int *aposta, int *sorteio, int tam)
{

    int i, j;
    numAcertos = 0;

    for(i=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
        {
            if(aposta[i]==sorteio[j]) //se os números forem iguais, então adiciona 1 ao número de acertos
            {
                numAcertos++;
            }
        }
    }

    return numAcertos;

}


int main()
{
    int tam = 6;
    int aposta[tam];
    int sorteio[tam];
    int i;
    
    //leitura do vetor sorteio
    printf("\nEntre com as %d dezenas sorteadas: ", tam);
    for(i=0; i<tam; i++)
    {
        scanf("%d", &sorteio[i]);

        //validação do número
        if(  sorteio[i]<1  ||  sorteio[i]>80  )
        {
            printf("\nNumero invalido. Insira um numero entre 1 e 80.\n")
            while(  sorteio[i]<1  ||  sorteio[i]>80  )
            {
                scanf("%d", &sorteio[i]);
            }
        }
    }

    //leitura do vetor aposta
        printf("\nEntre com o jogo: ");
    for(i=0; i<tam; i++)
    {
        scanf("%d", &aposta[i]);

        //validação do número
        if(  aposta[i]<1  ||  aposta[i]>80  )
        {
            printf("\nNumero invalido. Insira um numero entre 1 e 80.\n")
            while(  aposta[i]<1  ||  aposta[i]>80  )
            {
                scanf("%d", &aposta[i]);
            }
        }
    }

    int acertosJogador = avalia_aposta (aposta, sorteio, tam);

    printf("Numero de acertos: %d :", acertosJogador);

    if ( acertosJogador == 6 )
        printf("Sena!");
    else if  ( acertosJogador == 5 )
        printf("Quina!");
    else if  ( acertosJogador == 4 )
        printf("Quadra!");


    return 0;
}