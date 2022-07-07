// Aula Prática 10 - Funções (parâmetros por referência)
// Yasmin Katerine Beer Zebrowski
// Turma K

// Problema 2

#include <stdio.h>

#define MAX 20

void calc_intersec(int a[], int na, int b[], int nb, int c[], int *nc)
{
    int i, j;
    *nc = 0;

    for(i=0; i<na; i++)
    {
        for(j=0; j<nb; j++)
        {
            if(a[i]==b[j])
            {
                c[*nc] = a[i]; //c recebe o valor intersecção
                *nc += 1;

                //printf("[ %d %d ]", c[*nc], *nc);
            }
        }
    }
}

int main()
{
    int na, nb, nc;
    int i;
    int a[MAX], b[MAX], c[MAX];

    printf("Entre com o nro de elementos do vetor a: ");
    scanf("%d", &na);

    printf("Entre com os %d elementos do vetor a: ", na);
    for(i=0; i < na; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Entre com o nro de elementos do vetor b: ");
    scanf("%d", &nb);

    printf("Entre com os %d elementos do vetor b: ", nb);
    for(i=0; i<nb; i++)
    {
        scanf("%d", &b[i]);
    }

    calc_intersec(a, na, b, nb, c, &nc);

    if(nc == 0)
    {
        printf("\nVetor interseccao: vazio\n");
    }
    else
    {
        printf("\nVetor inserseccao: [ ");
        for(i=0; i < nc; i++)
        {
            printf(" %d ", c[i]);
        }
        printf(" ]");
    }

    return 0;
}
