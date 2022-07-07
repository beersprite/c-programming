//  Lista 5 - Laço FOR
//  Yasmin Katerine Beer Zebrowski
//  Turma K

//  Problema 2

#include<stdio.h>

#define N 10

int main(){

    int teste, i;
    int soma_aprov = 0;
    int soma_reprov = 0;

    printf("Coleta de Dados\n");

    //linha p visualização
    printf("\n--------------------\n");

    for (i=0; i<(N); i++){

        printf("Aluno %d passou no teste? (1/2) ", i+1);
        scanf("%d", &teste);


        if (teste==1)
            soma_aprov++;
        else
            soma_reprov++;

        //linha p visualização
        printf("\n--------------------\n");
    }


    printf("\nRelatorio:\n");
    printf("Alunos aprovados: %d\n", soma_aprov);
    printf("Alunos reprovados: %d\n", soma_reprov);

    if(soma_aprov>8)
        printf("Bonus para o instrutor!\n\n");


    return 0;

}
