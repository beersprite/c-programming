// Lista 3 - Comando Switch
// Yasmin Katerine Beer Zebrowski
// Turma K
// Questão 2

#include<stdio.h>
#include<math.h>


int main(){

    int placa, algarismo;

    printf("\n\tEntre com valor da placa: ");
    scanf("%d", &placa);

    //usuario n eh comportado -> encerra programa
    if(placa<1000||placa>9999){

        printf("\n\tErro! Placa invalida.\n");
        return 0;
    }

    //encontra ultimo algarismo e imprime mes

    algarismo = placa % 10;

    printf("\n\tMes de vencimento ");

        switch(algarismo){
            case 1:  printf("Janeiro\n"); break;
            case 2:  printf("Fevereiro\n"); break;
            case 3:  printf("Março\n"); break;
            case 4:  printf("Abril\n"); break;
            case 5:  printf("Maio\n"); break;
            case 6:  printf("Junho\n"); break;
            case 7:  printf("Julho\n"); break;
            case 8:  printf("Agosto\n"); break;
            case 9:  printf("Setembro\n"); break;
            case 0:  printf("Outubro\n"); break;
            default: break;
        }

    return 0;

}

