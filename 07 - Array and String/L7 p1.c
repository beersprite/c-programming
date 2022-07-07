//  Prática 7 - Strings e Vetores
//  Yasmin Katerine Beer Zebrowski
//  Turma K

// Problema 1


#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TAM_STR 60


int main(){

    char entrada[TAM_STR];
    char saida[TAM_STR];
    int n_vogais = 0;
    int i = 0;       //posições
    int d;           //posições para laço dos espaços

    printf("Entre com string: ");
    fgets(entrada, TAM_STR, stdin);
    entrada[strlen(entrada)-1] = '\0';      // acrescenta o finalizador de string


    //copia entrada para saída
    strcpy (saida, entrada);


    // laço para contagem de vogais
    while(entrada[i]!='\0'){

        // troca upper pra lower
        entrada[i] = tolower(entrada[i]);

        // conta vogais
        if(entrada[i]=='a' || entrada[i]=='e' || entrada[i]=='i' || entrada[i]=='o' || entrada[i]=='u'){
            n_vogais++;
        }
        i++;
    }


    i = 0;      //reinicia posição


    // laço para deslocamento da string
    while(saida[i]!='\0'){


        if (saida[i] == ' ') {       // se a posição é espaço, desloca o resto da string apagando o espaço

            d = i;
            do{
                saida[d] = saida[d+1];
                d++;
            }while(saida[d]!='\0');

            saida[d] = '\0';          //finaliza string da saída
        }

        i++;
    }

    printf("\nString sem espacos: %s", saida);
    printf("\nNro de vogais: %d\n", n_vogais);

    return 0;

}
