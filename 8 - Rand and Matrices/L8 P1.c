// Prática 8 – Números Aleatórios e Matrizes
// Yasmin Katerine Beer Zebrowski
// Turma K

// Problema 1

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_COLUNA 4
#define MAX_LINHA 4
#define MIN 2    //mínimo do intervalo
#define MAX 40   //máximo do intervalo

int main(){

    int coluna, linha;
    int matriz[MAX_LINHA][MAX_COLUNA];
    int maior_coluna[MAX_COLUNA];
    int menor_linha[MAX_LINHA];

    srand(time(NULL)); //inicializa semente

    printf("\n----------------------------------\n"); //estética

    //Cria uma matriz com numeros aleatórios no intervalo [2,40]
    printf("Arranjo:\n\n");

    for (linha = 0; linha < MAX_LINHA; linha++){
        for (coluna = 0; coluna < MAX_COLUNA; coluna++){

            matriz[linha][coluna] = MIN + (rand() % (MAX - MIN + 1));
            printf("%5d", matriz[linha][coluna]);

        }
         printf("\n");

    }


    printf("\n----------------------------------\n");

    printf("Arranjo maiores elementos colunas:\n");
    //Encontra maior elemento de cada coluna
    for (coluna = 0; coluna < MAX_COLUNA; coluna++){
        maior_coluna[coluna] = matriz[0][coluna]; // inicia com o 1o elemento de cada coluna
        for (linha = 1; linha < MAX_LINHA; linha++)
            if (maior_coluna[coluna] < matriz[linha][coluna])
                maior_coluna[coluna] = matriz[linha][coluna];
                printf ("%5d", maior_coluna[coluna]);
    }

    printf("\n----------------------------------\n");


    //Encontra menor elemento de cada linha
    printf("Arranjo menores elementos linhas:\n");

    for (linha = 0; linha < MAX_LINHA; linha++){
        menor_linha[linha] = matriz[linha][0]; // inicia com o 1o elemento de cada linha
        for (coluna = 1; coluna < MAX_COLUNA; coluna++)
            if (menor_linha[linha] > matriz[linha][coluna])
                menor_linha[linha] = matriz[linha][coluna];
                printf ("%5d", menor_linha[linha]);
    }

    printf("\n----------------------------------\n");

    return 0;
}
