// Prática 8 – Números Aleatórios e Matrizes
// Yasmin Katerine Beer Zebrowski
// Turma K

// Problema 2

#include <time.h>
#include <stdio.h>
#include <stdlib.h>


#define MIN 1    //mínimo do intervalo
#define MAX 10   //máximo do intervalo
#define MAX_TENTATIVAS 5

int main(){

    int n_computador;
    int n_usuario = -1; //inicializa para já entrar no laço
    int n_tentativas = 0;

    srand(time(NULL)); //Inicializa semente

    //Computador sorteia o numero
    n_computador = MIN + (rand() % (MAX - MIN + 1));

    printf("\n------------------------------------------------------"); //estética

    //Fica no laço até usuário acertar o valor ou ultrapassar 5 tentativas
    while( (n_usuario != n_computador) && (n_tentativas<MAX_TENTATIVAS) ){
        printf("\n\n Digite seu chute: ");
        scanf("%d", &n_usuario);

        if(n_usuario<n_computador){
            printf(" Seu chute eh menor do que o valor sorteado");
        }
        else if(n_usuario>n_computador){
            printf(" Seu chute eh maior do que o valor sorteado");
        }

        n_tentativas++;
    }

    printf("\n------------------------------------------------------\n"); //estética

    if(n_tentativas>=MAX_TENTATIVAS){
        printf("Voce ultrapassou o numero maximo de tentativas!");
    }
    else{
        printf("Parabens! Voce acertou em %d tentativas!", n_tentativas);
    }

    printf("\n------------------------------------------------------\n"); //estética

    return 0;
}
