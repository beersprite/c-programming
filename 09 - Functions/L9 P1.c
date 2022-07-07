// Prática 9 - Funções void e tipadas
// Yasmin Katerine Beer Zebrowski
// Turma K

// Problema 1

#include <stdio.h>

void menu(){

    printf("\n  Entre com uma das opcoes:\n\n");
    printf("\t1 - Converte centigrados para fahrenheit\n");
    printf("\t2 - Converte fahrenheit para centigrados\n");
    printf("\t3 - Sair\n\n");
    printf("  Opcao: ");
}

void Tf_to_Tc(){

    float tf, tc;

    printf("\nInsira a temperatura em Fahrenheit: ");
    scanf("%f", &tf);

    tc = 5*(tf - 32)/9;

    printf("\nTemperatura em graus Celsius: %.2f\n\n", tc);
    return 0;

}

void Tc_to_Tf(){

    float tf, tc;

    printf("\nInsira a temperatura em Celsius: ");
    scanf("%f", &tc);

    tf = 9*tc/5 + 32;

    printf("\nTemperatura em Fahrenheit: %.2f\n\n", tf);
    return 0;

}

int main(){

    int opcao;

    //chama função menu para escrever na tela
    menu();
    scanf("%d", &opcao);

    switch(opcao){

        case 1:
            Tc_to_Tf();
            break;

        case 2:
            Tf_to_Tc();
            break;

        case 3:
            printf("\nEncerrando o programa.\n\n");
            return 0;

        default:
            printf("\nOpcao invalida.\n\n");
            return 0;
    }

    return 0;
}
