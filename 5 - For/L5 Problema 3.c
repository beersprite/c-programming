//  Lista 5 - Laço FOR
//  Yasmin Katerine Beer Zebrowski
//  Turma K

//  Problema 3

#include<stdio.h>
#include<math.h>


int main(){

    int i, N;
    float parte1;
    float parte2;
    float termo;
    float somatorio = 0;

    printf("Entre com numero de termos para o calculo de PI: ");
    scanf("%d", &N);


    for (i=0; i<(N); i++){

        //de acordo com a fórmula de leibniz para PI
        parte1 = powf(-1, i);
        parte2 = (2*i)+1;
        termo = 4*parte1/parte2;
        somatorio += termo;

    }

    printf("Valor de PI com %d termos: %.6f\n", N, somatorio);

    return 0;

}
