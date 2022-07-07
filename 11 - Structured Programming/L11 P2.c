// Prática 11 – Programação Estruturada
// Yasmin Katerine Beer Zebrowski
// Turma K

// Problema 2 - Substitui menor

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
#define MIN 0

int substitui_menor(int *vetorInteiros, int tam, int inteiroX)
{
    int i;
    int menorInteiro = 0;
    int posicao_menorInteiro;

    //encontra menor inteiro do vetor
    for( i=0; i<tam; i++ )
    {
        if ( vetorInteiros[i]<menorInteiro )
        {
            menorInteiro = vetorInteiros[i];
            posicao_menorInteiro = i;
        }       
    }

    //Se X for menor que o menor inteiro, subtitui
    if ( inteiroX < menorInteiro )
    {
        vetorInteiros[posicao_menorInteiro] = inteiroX;
        return 1;
    }
    else //nao houve substituicao
    {
        return 0;
    }
    
}

int main()
{
    int tam = 10;
    int vetorInteiros[tam];
    int inteiroX;
    int i;

    // inicializa a semente 
    srand(time(NULL));

    //gera vetor aleatório
    printf("\n\nVetor gerado: ");
    for ( i=0; i<tam; i++ )
    {
        vetorInteiros[i] = MIN + (rand() % (MAX - MIN + 1)); //[0,100]
        printf("%5d", vetorInteiros[i]);
    }
    
    //le valor de x
    printf("\n\nValor de x: ");
    scanf("%d", &inteiroX);

    //subrotina
    int houveSubstituicao = substitui_menor(vetorInteiros, tam, inteiroX);


    //se houveSubstituicao = 1 -> imprime vetor atualizado
    if(houveSubstituicao == 1)
    {
        printf("\n\nFoi feita a troca!");
        for ( i=0; i<tam; i++ )
             printf("%5d", vetorInteiros[i]);
    }
    //se nao, imprime vetor sem troca.
    else
    {
        printf("Nao houve troca.");
    }
    
    return 0;
}