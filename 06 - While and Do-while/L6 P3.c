// Lista 6 - Laços while/do-while
// Yasmin Katerine Beer Zebrowski
// Turma K

// Problema 3

#include <stdio.h>


int main(){

    int n, menor_n, maior_n;
    int n_aux;

    //primeiro termo não entra no laço pois precisa de um numero para comparação
    printf("Entre com um nro inteiro: ");
    scanf("%d", &n);

    maior_n = n;
    menor_n = n;

    while(n!=9999){

        printf("Entre com um nro inteiro: ");
        scanf("%d", &n);

        if(maior_n<n){
            maior_n = n;
        }
        if(menor_n>n){
           menor_n = n;
        }
    }

    printf("\n O maior valor vale %d e o menor valor vale %d\n", maior_n, menor_n);

    return 0;

}
