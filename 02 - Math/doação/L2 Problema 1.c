// Lista 2 - Algoritmos e Programa��o
// Yasmin Katerine Beer Zebrowski
// Turma K
// Quest�o 1

#include<stdio.h>
#include<locale.h> //acentua��o


int main(){

    setlocale(LC_ALL, "Portuguese"); //habilita a acentua��o

    char tatuagem;
    char autorizado;
    int peso;
    int idade;


    printf("\n\tVoc� fez tatuagem nos �ltimos 12 meses (S/N)? ");
    scanf(" %c", &tatuagem);

    printf("\n\tQual seu peso? ");
    scanf(" %d", &peso);

    printf("\n\tQual a sua idade? ");
    scanf(" %d", &idade);

    if(idade<18){

        printf("\n\tVoc� possui autoriza��o de respons�veis (S/N)? ");
        scanf(" %c", &autorizado);
    }

    //testa apenas casos que barram doa��o
    if( (tatuagem=='S') ||  (autorizado=='N')   ||  (idade>69)  ||  (peso<50)   ){

        printf("\n\n\tVoc� n�o est� apto a doar sangue.\n");

    }

    else{

        printf("\n\n\tVoc� est� apto a doar sangue!\n");

    }

    return 0;

}
