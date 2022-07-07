// Lista 6 - Laços while/do-while
// Yasmin Katerine Beer Zebrowski
// Turma K

// Problema 2

#include <stdio.h>
#include <math.h>

int main(){

    float x, tol, valor;
    int n = 1;
    int i = 0; // sinal do termo, primeiro termo positivo começa em 0
    float funcao_x = 0;


    printf("Entre com valor de x: ");
    scanf("%f", &x);

    if((x<-1.0) || (x>1.0)){

       printf("Valor de x fora do intervalo!");

       return 0;
    }

    printf("Entre com o valor de tolerancia: ");
    scanf("%f", &tol);

    do{

        valor = (powf(x, n) * pow(-1, i)) / ((n)*(n+1));
        n += 2;
        i++;
        funcao_x += valor;

    }while(fabs(valor)>=tol); //usa o módulo do valor


    funcao_x -= valor; //tira o último termo que está fora da tolerancia

    printf("\nO resultado foi %f ", funcao_x);


    return 0;
}
