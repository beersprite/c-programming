// Prática 11 – Programação Estruturada
// Yasmin Katerine Beer Zebrowski
// Turma K

// Problema 3 - Número de Vogais

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void conta_vogais(char texto[], int num_vogais[5])
{

    int i, j;
    int tam = strlen(texto);
    
    //inicializa num_vogais com 0 vogais para cada espaço de memória
    for(i=0; i<5; i++)
    {
        num_vogais[i] = 0;
    }


    //conta quantas vogais são iguais
    for(i=0; i<tam; i++)
    {    
        //converte para maiúsculas
        texto[i] = toupper(texto[i]);

        //se os char forem iguais, conta +1 para o espaço do vetor correspondente.
        if (texto[i]=='A') 
            num_vogais[0] += 1;
        else if (texto[i]=='E')
            num_vogais[1] += 1;
        else if (texto[i]=='I')
            num_vogais[2] += 1;
        else if (texto[i]=='O')
            num_vogais[3] += 1;
        else if (texto[i]=='U')
            num_vogais[4] += 1;
    
    }

}


int main()
{
    char texto[100];
    int num_vogais[5];

    printf("Entre com o texto: ");
    gets(texto);

    conta_vogais(texto[], num_vogais[5]);

    printf("A vogal A aparece %d vezes.", num_vogais[0]);
    printf("A vogal E aparece %d vezes.", num_vogais[1]);
    printf("A vogal I aparece %d vezes.", num_vogais[2]);
    printf("A vogal O aparece %d vezes.", num_vogais[3]);
    printf("A vogal U aparece %d vezes.", num_vogais[4]);
    

    return 0;
}