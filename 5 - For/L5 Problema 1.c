//  Lista 5 - Laço FOR
//  Yasmin Katerine Beer Zebrowski
//  Turma K

//  Problema 1

#include<stdio.h>
#include<ctype.h>

#define N 5

int main(){

    int numero_pessoas, renda_total, i;
    char internet;
    //declaração de variáveis para calculo das médias
    float soma_res =0;
    float soma_renda = 0;
    int soma_internet = 0;

    printf("Coleta de Dados\n");

    printf("\n--------------------\n"); //linha p visualização

    for (i=0; i<(N); i++){

        //controla qual familia
        printf("\nFamilia %d", (i+1));

        //pessoas
        printf("\nQuantas pessoas moram na residencia? ");
        scanf("%d", &numero_pessoas);

        soma_res += numero_pessoas;

        //renda
        printf("\nQual a renda total da moradia? ");
        scanf("%d", &renda_total);

        soma_renda += renda_total;

        //internet
        printf("\nPossui acesso a internet? (S/N) ");
        scanf(" %c", &internet);

        // soma 1 ao numero de moradias com internet se tiver na moradia
        // considera maiusculas e minusculas
        if ( toupper(internet)=='S' ){
            soma_internet++;
        }

        printf("\n--------------------\n");  //linha p visualização
    }


    printf("\nRelatorio:\n");

    printf("Nro medio de pessoas por residencia: %.2f\n", (soma_res/N));
    printf("Renda mensal media: %.2f\n", (soma_renda/N));
    printf("Nro de moradias com acesso a internet: %d\n", soma_internet);

    return 0;

}
