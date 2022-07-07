// Aula Prática 13 - Arquivios Binários
// Yasmin Katerine Beer Zebrowski
// Turma K

// ENEM

#include <stdio.h>
#include <string.h>

typedef struct aluno
{
    char nome[60];
    int idade;
    int media; //entre 0 e 100
} ALUNO;


void desenhaLinha() //estética
{
    printf("\n-----------------------------------------------------------------------------\n");
}

char escreveDados(FILE *arquivo, ALUNO aluno)
{
    char opcao[] = "sair";

    printf("\n\tNome: ");
    gets(aluno.nome);

    if ( strcmp(opcao, aluno.nome) == 0) //sai do laço se digitar "sair"
        return 'S';

    printf("\n\tIdade: ");
    scanf("%d", &aluno.idade);

    printf("\n\tMedia: ");
    scanf("%d", &aluno.media);

    if (fwrite(&aluno, sizeof(ALUNO), 1, arquivo) != 1) // escreve e testa erro
        printf("\nErro de escrita\n");

    fflush(stdin);

    return 'A';

}


void imprimeMedias(FILE *arquivo, int mediaBusca, ALUNO aluno)
{

    while(!feof(arquivo)) //enquanto não chegar no final, testa leitura, para não considerar a tentativa no final
    {
        if(fread(&aluno, sizeof(ALUNO), 1, arquivo) == 1) //para que detecção de final do arquivo não cause impressão dupla:
        {
            if(aluno.media >= mediaBusca)
            {
                printf("\n\tNome: %s\n", aluno.nome);
                printf("\n\tIdade: %d\n", aluno.idade);
                printf("\n\tMedia: %d\n\n", aluno.media);
            }
        }
    }
}


float calculaMediaIdades(FILE *arquivo, ALUNO aluno)
{
    float somaIdades = 0;
    int contaAlunos = 0;


     while(!feof(arquivo)) //enquanto não chegar no final, testa leitura, para não considerar a tentativa no final
    {
        if(fread(&aluno, sizeof(ALUNO), 1, arquivo) == 1) //para que detecção de final do arquivo não cause impressão dupla:
        {
            somaIdades += (aluno.idade);
            contaAlunos++;
        }
    }

    float media = somaIdades/contaAlunos;

    return media;

}


int main()
{
    ALUNO aluno;
    FILE *arquivo;
    char nomeArquivo[20];
    char opcao;
    int mediaBusca;
    float mediaIdades;


    //NOME DO ARQUIVO
    printf("\n\tInsira nome do arquivo: ");
    gets(nomeArquivo);

    arquivo = fopen (nomeArquivo, "wb");
    fflush(stdin);

    //ESCREVE OS DADOS
    if ( arquivo == NULL )
        printf("\n\tErro na abertura do arquivo! ");
    else
    {
        desenhaLinha();
        while(opcao != 'S')
            opcao = escreveDados(arquivo, aluno);

        fclose(arquivo);
    }

    //BUSCA MEDIAS
    desenhaLinha();
    printf("\n\tEntre com a media para busca: ");
    scanf("%d", &mediaBusca);

    desenhaLinha();
    printf("\n\tLista de todos os alunos com media maior ou igual a %d: \n", mediaBusca);

    arquivo = fopen (nomeArquivo, "rb");

    if ( arquivo == NULL )
        printf("\n\tErro na abertura do arquivo! ");
    else
    {
        //IMPRIME MEDIAS
        imprimeMedias(arquivo, mediaBusca, aluno);
    }

    fclose(arquivo);

    arquivo = fopen (nomeArquivo, "rb"); //abre de novo para voltar ao inicio do arquivo
    desenhaLinha();

    if ( arquivo == NULL )
        printf("\n\tErro na abertura do arquivo! ");
    else
    {
        //MEDIA DAS IDADES
        printf("\n\tIdade media de todos os alunos: ");

        mediaIdades = calculaMediaIdades(arquivo, aluno);

        printf("%.2f\n\n", mediaIdades);
    }

    fclose(arquivo);

    return 0;
}

