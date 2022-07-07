// Montante
// Yasmin Beer - Turma K/L 

#include<stdio.h>
#include<math.h>

int main(){

    float x;
    float i;
    int d;
    int n_meses;
    int mes = 30;
    float montante;

    printf("\nQuantidade inicial: ");
    scanf("%f", &x);

    printf("\nPercentual: ");
    scanf("%f", &i);

    printf("\nNúmero de dias: ");
    scanf("%d", &d);

    //Como os juros são creditados ao final de cada mês, podemos considerar apenas a parte inteira do número de meses. 
    n_meses = d/mes;

    montante = x*pow((1 + i/100), n_meses);

    printf("\nMontante final: %.2f", montante);


    return 0;
}