//  Prática 7 - Strings e Vetores
//  Yasmin Katerine Beer Zebrowski
//  Turma K

// Problema 3


#include <stdio.h>
#define MAXLIDOS 15

int main(){

    int n;
    int i = 0;
    float arranjo[MAXLIDOS];
    float soma_media = 0;
    float media;
    int maior = 0;
    int menor = 0;

    printf("Entre com os valores: ");

    do{

        scanf("%f", &arranjo[i]);
        soma_media += arranjo[i];
        i++;

    }while(arranjo[i-1]>=0);

    //calculo media
    media = (soma_media - (arranjo[i-1]))/(i-1);  //o num negativo não conta para a media.

    int j;      //contador para não ler o resto do arranjo que for lixo.

    for(j=0; j<(i-1); j++){     //desconsidera o termo negativo

        if(arranjo[j]>media)
            maior++;
        else if(arranjo[j]<media)
            menor++;

     }

    printf("\nMedia dos valores: %.4f", media);
    printf("\nNumero de valores maiores que a media: %d", maior);
    printf("\nNumero de valores menores que a media: %d\n", menor);

    return 0;

}
