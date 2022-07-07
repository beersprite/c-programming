// Quadrado Inscrito
// Yasmin Beer - Turma K/L 

#include<stdio.h>
#include<math.h>

int main(){

    float raio;
    float perimetro;
    float lado;
    float area;

    printf("\nRaio do Círculo: ");
    scanf("%f", &raio);

    //Como o raio do círculo é a diagonal do quadrado inscrito, podemos descobrir o lado através da relação prveniente do teorema de Pitágoras
    lado = 2*raio/(sqrt(2));
    perimetro = 4*lado;
    area = pow(lado, 2);

    printf("\nPerímetro do quadrado: %.2f", perimetro);

    printf("\nÁrea do quadrado: %.2f", area);

    return 0;
}