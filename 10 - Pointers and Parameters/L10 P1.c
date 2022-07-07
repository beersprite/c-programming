// Aula Prática 10 - Funções (parâmetros por referência)
// Yasmin Katerine Beer Zebrowski
// Turma K

// Problema 1

#include <stdio.h>
#include <math.h>
#include <ctype.h>

char le_s_n()
{
    char s_n;
    do
    {
        printf("\t Deseja continuar (S ou N)?");
        scanf(" %c", &s_n);
        s_n = toupper(s_n);

        if (s_n != 'S' && s_n != 'N' )
            printf("\n\tResposta invalida. ");

    } while (s_n != 'S' && s_n != 'N' );

     return s_n;

}

char triangulo(float a, float b, float c, float *area){

    //é triangulo?
    if ( ( (fabs(b-c))<a && a<(b+c) ) && ( (fabs(a-c))<b && b<(a+c) ) && ( (fabs(a-b))<c && c<(a+b) ) )
    {
        //todos os lados são conhecidos então a área será dada pela fórmula de Heron
        float sp = (a+b+c)/2; //semiperímetro
        *area = sqrt((sp*(sp-a)*(sp-b)*(sp-c)));
        printf("%f", *area);

        if(a==b && a==c ) //equilatero
        {
            return 'q';
        }
        else if(a==b || b==c ||a==c) //isosceles
        {
            return 'i';
        }
        else //escaleno
        {
            return 'e';
        }

    }
    else
     return 'n';

}

int main()
{

    float a, b, c;
    float *area;
    char execute_again;
    char eh_triangulo;

    while(execute_again!='N')
    {
        //le valores
        printf("Entre com os valores de a, b, c: ");
        scanf("%f%f%f", &a, &b, &c);


        eh_triangulo = triangulo(a, b, c, area);

        if(eh_triangulo == 'e')
        {
            printf("\nTriangulo escaleno com area %f", *area);
        }
        else if (eh_triangulo == 'i')
        {
            printf("\nTriangulo isosceles com area %f", *area);
        }
        else if (eh_triangulo == 'q')
        {
            printf("\nTriangulo equilatero com area %f", *area);
        }
        else
            printf("\nNao eh triangulo!");


        //usuario deseja executar novamente?
        execute_again = le_s_n();

    }



    return 0;
}
