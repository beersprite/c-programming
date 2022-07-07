// Aula Prática 14 - Arquivios Texto
// Yasmin Katerine Beer Zebrowski
// Turma K

// TROCA CHAR DO ARQUIVO

#include <stdio.h>
#include <string.h>

#define NLIN 10
#define NCOL 11
#define TAM 20

int menuPrincipal()
{
    int opcao;

    printf("Entre com sua opcao:\n");
    printf("1 - Le arquivo\n");
    printf("2 - Imprime matriz na tela\n");
    printf("3 - Troca caracter\n");
    printf("4 - Grava arquivo\n");
    printf("5 - Sair\n\n");
    printf("Entre com sua opcao: ");
    do{
        scanf("%d", &opcao);
    } while (opcao<1 || opcao>5);

    return opcao;

}

int abre_le_arquivo(char m[NLIN][NCOL], char nome_arq[])
{
    FILE *arq;
    int i, j;

    if( (arq = fopen(nome_arq, "r")) == NULL )
        return -1;
    else
    {
        for (i=0; i<NLIN; i++)
        {
            for(j=0; j<NCOL; j++)
            {
                m[i][j] = getc(arq);
            }
        }

        fclose(arq);
        return 1;
    }
}

 void imprime_matriz_tela(char m[NLIN][NCOL])
 {
    int i, j;

    printf("\n");
    for (i=0; i<NLIN; i++)
    {
        for(j=0; j<NCOL; j++)
            printf("%c", m[i][j]);
    }
 }

 void troca_caracter(char m[NLIN][NCOL],char velho, char novo)
 {
    int i, j;

    for (i=0; i<NLIN; i++)
    {
        for(j=0; j<NCOL; j++)
            if( m[i][j] == velho )
                m[i][j] = novo;
    }
 }

 int abre_grava_arquivo(char m[NLIN][NCOL], char nome_arq[])
 {
    FILE *arq;
    int i, j;

    if( (arq = fopen(nome_arq, "w")) == NULL )
        return -1;
    else
    {
        for (i=0; i<NLIN; i++)
        {
            for(j=0; j<NCOL; j++)
            {
                fprintf(arq, "%c", m[i][j]);
            }
        }

        fclose(arq);
        return 1;

     }
 }

 void linha() //estética
 {
     printf("\n-----------------------------------------------\n\n");
 }


main()
{
    char nome_arq[TAM];
    char m[NLIN][NCOL];
    int opcao;
    int sucessoLeitura, sucessoGravacao;
    char velho, novo;

    while(1)
    {
        opcao = menuPrincipal();

        switch (opcao)
        {
        case 1: //LEITURA
            //NOME ARQUIVO
            printf("Insira nome do arquivo: ");
            scanf("%s", nome_arq);

            sucessoLeitura = abre_le_arquivo(m, nome_arq);

            if(sucessoLeitura == -1)
                printf("\nErro na leitura!\n");
            else
                printf("\nSucesso na leitura!\n");
            linha();
            break;

        case 2: //IMPRIME
            imprime_matriz_tela(m);
            linha();
            break;

        case 3: //TROCA
            printf("Char velho para substituir: ");
            scanf(" %c", &velho);
            printf("Novo char: ");
            scanf(" %c", &novo);

            troca_caracter(m, velho, novo);
            linha();

            break;

        case 4: //GRAVA
            printf("Entre com nome do novo arquivo: ");
            scanf("%s", nome_arq);

            sucessoGravacao = abre_grava_arquivo(m, nome_arq);
            if(sucessoGravacao == -1)
                printf("\nErro na gravacao!\n");
            else
                printf("\nSucesso na gravacao!\n");

            linha();
            break;

        case 5: // SAIR
            linha();
            printf("\nEncerrando programa... \n");
            return 0;
        }

    }

}
