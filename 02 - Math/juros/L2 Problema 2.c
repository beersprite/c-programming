// Lista 2 - Algoritmos e Programação
// Yasmin Katerine Beer Zebrowski
// Turma K
// Questão 2


#include<stdio.h>
#include<locale.h> //acentuação
#include<math.h>


int main(){

    setlocale(LC_ALL, "Portuguese"); //habilita a acentuação

    int minutos;
    float valor;
    int hora = 60;


    printf("\n\tEntre o tempo de permanência em minutos: ");
    scanf(" %d", &minutos);

    if(minutos<=hora){

        valor = 15;

        printf("\n\tO valor a ser pago é de R$%.0f\n\n", valor);

    }
    else if(minutos>=(8*hora)){

        valor = 32;

        printf("\n\tO valor a ser pago é de R$%.0f\n\n", valor);

    }
    else if(hora<minutos<(8*hora)){

        valor = 15 + (2*minutos/hora);

        printf("\n\tO valor a ser pago é de R$%.0f\n\n", floor(valor));

    }

    return 0;

}
