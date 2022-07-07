// Lista 2 - Algoritmos e Programação
// Yasmin Katerine Beer Zebrowski
// Turma K
// Questão 1

#include<stdio.h>
#include<locale.h> //acentuação


int main(){

    setlocale(LC_ALL, "Portuguese"); //habilita a acentuação

    char tatuagem;
    char autorizado;
    int peso;
    int idade;


    printf("\n\tVocê fez tatuagem nos últimos 12 meses (S/N)? ");
    scanf(" %c", &tatuagem);

    printf("\n\tQual seu peso? ");
    scanf(" %d", &peso);

    printf("\n\tQual a sua idade? ");
    scanf(" %d", &idade);

    if(idade<18){

        printf("\n\tVocê possui autorização de responsáveis (S/N)? ");
        scanf(" %c", &autorizado);
    }

    //testa apenas casos que barram doação
    if( (tatuagem=='S') ||  (autorizado=='N')   ||  (idade>69)  ||  (peso<50)   ){

        printf("\n\n\tVocê não está apto a doar sangue.\n");

    }

    else{

        printf("\n\n\tVocê está apto a doar sangue!\n");

    }

    return 0;

}
