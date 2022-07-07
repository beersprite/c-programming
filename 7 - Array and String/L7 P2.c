//  Prática 7 - Strings e Vetores
//  Yasmin Katerine Beer Zebrowski
//  Turma K

// Problema 2


#include <stdio.h>
#define TAMMAX 10


int main(){

    int leu_par[TAMMAX] = {0};        //Conta se o número par já foi usado
    int leu_impar[TAMMAX] = {0};      //Conta se o número ímpar já foi usado
    int saida_normal[TAMMAX];
    int saida_invertida[TAMMAX];
    int x = 0;  //Contador de pares
    int i, j;


    printf("Arranjo de entrada: ");

    //Conta se foi inseridas quantidades iguais de pares e ímpares
    for(i=0; i<TAMMAX; i++){

        scanf("%d,", &saida_normal[i]);

        if( (saida_normal[i]%2) == 0 ){
            x++;
        }
        else{
            x--;
        }
    }

    //Finaliza o programa se o usuário não inseriu quantidades iguais
    if(x!=0){
        printf("\nNao foram inseridas as mesmas quantidades de numeros pares e impares.\n\n");
        return 0;
    }


    //Troca par com ímpar
     for(i=0; i<TAMMAX; i++){

        //Se número na posição i é par, então coloca um número ímpar na posição
        if(saida_normal[i]%2==0){

            for(j=0; j<TAMMAX; j++){    //Encontra o próximo termo ímpar

                if( (saida_normal[j]%2!=0) && (leu_impar[j]==0)){  //Se número é ímpar e ainda não foi lido, insere na posição i
                    saida_invertida[i] = saida_normal[j];
                    leu_impar[j] = 1;    //Leu a posição j
                    break;               // Sai do laço
                }
                leu_impar[j] = 1;   //Leu a posição j
            }
        }


        //Se número na posição i é ímpar, então coloca um número par na posição
        else{

            for(j=0; j<TAMMAX; j++){    //Encontra o próximo termo par

                if( (saida_normal[j]%2==0) && (leu_par[j]==0)){  //Se número é par e ainda não foi lido, insere na posição i
                    saida_invertida[i] = saida_normal[j];
                    leu_par[j] = 1;      //Leu a posição j
                    break;               // Sai do laço
                }
                leu_par[j] = 1;   //Leu a posição j
            }
        }

     }

    //Imprime as saídas

    printf("\nArranjo de entrada: ");
    for(i=0; i<TAMMAX; i++){
        printf("%d ", saida_normal[i]);
    }

    printf("\nArranjo de saida: ");
    for(i=0; i<TAMMAX; i++){
        printf("%d ", saida_invertida[i]);
    }

    printf("\n");

    return 0;

}

