// Lista 2 - Algoritmos e Programa��o
// Yasmin Katerine Beer Zebrowski
// Turma K
// Quest�o 3


#include<stdio.h>
#include<locale.h> //acentua��o
#include<math.h>


int main(){



    float a, b, c;
    float delta;
    float r1, r2;

    printf("\n\tEntre com os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);


    //Chamo a fun��o aqui para habilitar acentos e ainda aceitar decimais com ponto, ao inv�s de v�rgula
    setlocale(LC_ALL, "Portuguese");

    if(a==0){

        printf("\n\tN�o � equa��o do 2� grau.\n");
   }

    else{

        delta = pow(b,2) - 4*a*c;
        //printf("%f",delta);


        if(delta<0){

            printf("\n\tN�o h� ra�zes reais.\n\n");
        }

        else{

            //calculo uma das raizes pois ser� apresentada nos dois casos
            r1 = (-b+(sqrt(delta)))/(2*a);

            if(delta==0){

                printf("\n\tUma raiz real: %f\n\n", r1);
            }

            else{
                //calculo a ultima raiz pro ultimo caso
                r2 = (-b-(sqrt(delta)))/(2*a);
                printf("\n\tDuas ra�zes reais: %f e %f\n\n", r1, r2);

            }
        }
    }

    return 0;

}
