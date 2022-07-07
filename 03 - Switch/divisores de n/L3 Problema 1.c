// Lista 3 - Comando Switch
// Yasmin Katerine Beer Zebrowski
// Turma K
// Questão 1

#include<stdio.h>
#include<math.h>


int main(){

    int N, i;

    printf("Entre com valor de N (0<N<=20): ");
    scanf("%d", &N);

    //usuario n eh comportado -> encerra programa
    if(N<=0||N>20){
        return 0;
    }

    //laço para achar divisores. nem N nem 1 n podem ser printados
    printf("\nDivisores de N: \n");

    for(i=1; i<N; i++){

        if((N%i)==0){

            switch(i){
                case 1:  break;
                case 2:  printf("\ndois\n"); break;
                case 3:  printf("\ntres\n"); break;
                case 4:  printf("\nquatro\n"); break;
                case 5:  printf("\ncinco\n"); break;
                case 6:  printf("\nseis\n"); break;
                case 7:  printf("\nsete\n"); break;
                case 8:  printf("\noito\n"); break;
                case 9:  printf("\nnove\n"); break;
                case 10:  printf("\ndez\n"); break;
                default: break;
            }
        }
    }

    return 0;

}

