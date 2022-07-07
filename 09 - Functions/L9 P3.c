// Prática 9 - Funções void e tipadas
// Yasmin Katerine Beer Zebrowski
// Turma K

// Problema 3

#include <stdio.h>
#include <math.h>

void iteracao_raiz_cubica(float r, float x0, float t){

    float raiz_cubica, xn;

    //iteracao 0
    raiz_cubica = x0 - (((powf(x0, 3) - r)) / (3*powf(x0, 2)));
    xn = raiz_cubica;

    //proximas iteracoes
    while(fabs((powf(xn,3)-r)) >= t){ //pára quando xn^3 - r for menor que t. então deve repetir laço enquanto for maior ou igual.

        raiz_cubica = xn - (((powf(xn, 3) - r)) / (3*powf(xn, 2)));
        xn = raiz_cubica;

    }

    printf("\nA raiz cubica de %f eh %f\n\n", r, raiz_cubica);
    return 0;
}


int main(){

    float r, x0, t;

    printf("\n  Entre o valor de r: ");
    scanf("%f", &r);
    printf("\n  Entre o valor de x0: ");
    scanf("%f", &x0);
    printf("\n  Entre a tolerancia:  ");
    scanf("%f", &t);

    if(t<=0){ //consistencia
        printf("\nErro! Tolerancia menor ou igual que zero.\n");
        return 0;
    }

    //chama a funcao para calcular e imprimir.
    iteracao_raiz_cubica(r, x0, t);

    return 0;

}
