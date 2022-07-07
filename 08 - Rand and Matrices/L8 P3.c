// Pr�tica 8 � N�meros Aleat�rios e Matrizes
// Yasmin Katerine Beer Zebrowski
// Turma K

// Problema 3

#include <time.h>
#include <stdio.h>
#include <stdlib.h>


#define MIN 1    //m�nimo do intervalo
#define MAX 30   //m�ximo do intervalo

int main(){

    int n = 20; //inicializo N qualquer
    int coluna, linha, elemento, maior_linha, maior_coluna;
    int matriz[n][n];
    int minimax;

    srand(time(NULL)); //Inicializa semente

    printf("\n------------------------------------------------------\n"); //est�tica


    //Fica no la�o at� usu�rio inserir valor v�lido
    while(n<3 || n>9){
        printf(" Entre com a dimensao da matriz quadrada: ");
        scanf("%d", &n);
    }

    printf("------------------------------------------------------\n"); //est�tica

    //Cria uma matriz com numeros aleat�rios no intervalo [1,30]
    printf(" Matriz %d x %d:\n\n", n, n);

    for (linha = 0; linha < n; linha++){
        for (coluna = 0; coluna < n; coluna++){
            matriz[linha][coluna] = MIN + (rand() % (MAX - MIN + 1));
            printf("%5d", matriz[linha][coluna]);
        }
         printf("\n");
    }


    elemento = -1; //inicializa maior_elemento para posterior troca de valores

    //Encontra maior elemento da matriz
    for (coluna = 0; coluna < n; coluna++){
        for (linha = 0; linha < n; linha++){
            if (elemento < matriz[linha][coluna]){
                elemento = matriz[linha][coluna];     //atualiza maior elemento
                maior_linha = linha;
                maior_coluna = coluna;
            }
        }
    }

     //printf ("\n%d", maior_elemento[maior_linha][maior_coluna]);  //Imprime maior elemento da matriz (teste)


    minimax = matriz[maior_linha][maior_coluna];    //Inicializa minimax com maior elemento

    //Encontra o minimax
    for (coluna = 0; coluna < n; coluna++){
        if(minimax > matriz[maior_linha][coluna]){
            minimax = matriz[maior_linha][coluna];
        }
    }

    //Imprime minimax da matriz
    printf("\n------------------------------------------------------\n"); //est�tica
    printf(" Minimax:  %d", minimax);
    printf("\n------------------------------------------------------\n"); //est�tica

    return 0;
}
