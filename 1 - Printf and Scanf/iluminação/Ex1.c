// Ilumina��o de Quarto
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

    printf("\n\nComprimento do quarto: ");
    scanf("%f", &comp);

    printf("\n\nPot�ncia por l�mpada: ");
    scanf("%f", &potencia);

    lampadas = ((larg*comp)*ilum)/potencia;

    //se n�mero de lampadas for quebrado, ser� arredondado.
    printf("\n*******************");
    printf("\n\nN�mero de l�mpadas: %f", round(lampadas));


    return 0;
}
