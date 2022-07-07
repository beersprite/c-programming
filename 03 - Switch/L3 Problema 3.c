// Lista 3 - Comando Switch
// Yasmin Katerine Beer Zebrowski
// Turma K
// Questão 3

#include<stdio.h>
#include<math.h>


int main(){

    int N, algarismodezena, algarismounidade, soma;

    printf("\n\tEntre com N [20, 49]: ");
    scanf("%d", &N);

    //usuario n eh comportado -> encerra programa
    if(N<20||N>49){

        printf("\n\tErro! Fora do intervalo.\n");
        return 0;
    }

    //encontra algarismos e imprime soma

    algarismounidade = N % 10;
    algarismodezena = (N / 10);

    soma = algarismodezena + algarismounidade;

    printf("\n\tSoma dos algorismos: %d \n", (soma));

    // para imprimir sem ser na força bruta:
    // nomeamos de acordo com a posição do número

    printf("\n\tExtenso: ");

    switch(algarismodezena){
        case 2:  printf("Vinte"); break;
        case 3:  printf("Trinta"); break;
        case 4:  printf("Quarenta"); break;
        default: break;
    }

    switch(algarismounidade){
        case 1:  printf(" e um"); break;
        case 2:  printf(" e dois"); break;
        case 3:  printf(" e tres"); break;
        case 4:  printf(" e quatro"); break;
        case 5:  printf(" e cinco"); break;
        case 6:  printf(" e seis"); break;
        case 7:  printf(" e sete"); break;
        case 8:  printf(" e oito"); break;
        case 9:  printf(" e nove"); break;
        default: break;
    }

    printf("\n");

    return 0;

}

