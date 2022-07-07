// Iluminação de Quarto 
// Yasmin Beer - Turma K/L 

#include<stdio.h>
#include<math.h>

int main(){

    float larg;
    float comp;
    float lampadas;
    float potencia;
    int ilum = 16;

    printf("\nLargura do quarto: ");
    scanf("%f", &larg);

    printf("\nComprimento do quarto: ");
    scanf("%f", &comp);

    printf("\nPotência por lâmpada: ");
    scanf("%f", &potencia);

    lampadas = ((larg*comp)*ilum)/potencia;

    //se número de lampadas for quebrado, será arredondado para cima.
    printf("*******************");
    printf("\nNúmero de lâmpadas: %.0f", ceil(lampadas));


    return 0;
}