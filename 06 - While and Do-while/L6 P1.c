// Lista 6 - Laços while/do-while
// Yasmin Katerine Beer Zebrowski
// Turma K

// Problema 1

#include <stdio.h>

int main(){

    int i = 0;
    char c;
    int soma_upper = 0;
    int soma_lower = 0;

    do{
        printf("Entre com o %do caractere: ", i++);
        scanf(" %c", &c);

        if( (c>='A') && (c<='Z') ){
        soma_upper++;
        }
        else if( (c>='a') && (c<='z') ){
        soma_lower++;
        }


    }while(c!='!');

    printf("\nVoce digitou %d caracteres em minusculo e %d em maiusculo\n", soma_lower, soma_upper);

    return 0;

}
