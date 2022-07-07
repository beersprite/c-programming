//  Pr�tica 7 - Strings e Vetores
//  Yasmin Katerine Beer Zebrowski
//  Turma K

// Problema 2


#include <stdio.h>
#define TAMMAX 10


int main(){

    int leu_par[TAMMAX] = {0};        //Conta se o n�mero par j� foi usado
    int leu_impar[TAMMAX] = {0};      //Conta se o n�mero �mpar j� foi usado
    int saida_normal[TAMMAX];
    int saida_invertida[TAMMAX];
    int x = 0;  //Contador de pares
    int i, j;


    printf("Arranjo de entrada: ");

    //Conta se foi inseridas quantidades iguais de pares e �mpares
    for(i=0; i<TAMMAX; i++){

        scanf("%d,", &saida_normal[i]);

        if( (saida_normal[i]%2) == 0 ){
            x++;
        }
        else{
            x--;
        }
    }

    //Finaliza o programa se o usu�rio n�o inseriu quantidades iguais
    if(x!=0){
        printf("\nNao foram inseridas as mesmas quantidades de numeros pares e impares.\n\n");
        return 0;
    }


    //Troca par com �mpar
     for(i=0; i<TAMMAX; i++){

        //Se n�mero na posi��o i � par, ent�o coloca um n�mero �mpar na posi��o
        if(saida_normal[i]%2==0){

            for(j=0; j<TAMMAX; j++){    //Encontra o pr�ximo termo �mpar

                if( (saida_normal[j]%2!=0) && (leu_impar[j]==0)){  //Se n�mero � �mpar e ainda n�o foi lido, insere na posi��o i
                    saida_invertida[i] = saida_normal[j];
                    leu_impar[j] = 1;    //Leu a posi��o j
                    break;               // Sai do la�o
                }
                leu_impar[j] = 1;   //Leu a posi��o j
            }
        }


        //Se n�mero na posi��o i � �mpar, ent�o coloca um n�mero par na posi��o
        else{

            for(j=0; j<TAMMAX; j++){    //Encontra o pr�ximo termo par

                if( (saida_normal[j]%2==0) && (leu_par[j]==0)){  //Se n�mero � par e ainda n�o foi lido, insere na posi��o i
                    saida_invertida[i] = saida_normal[j];
                    leu_par[j] = 1;      //Leu a posi��o j
                    break;               // Sai do la�o
                }
                leu_par[j] = 1;   //Leu a posi��o j
            }
        }

     }

    //Imprime as sa�das

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

