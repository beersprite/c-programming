// Pr�tica 12 - Estruturas
// Yasmin Katerine Beer Zebrowski
// Turma K

//Problema 1 - Cadastro de carros


#include <stdio.h>
#include <string.h>

typedef struct carro
{
    int cod, ano;
    char modelo[45], marca[45];
    float preco;

}CARRO;


int menu()
{
    int option;

    printf("\n\n\t1 - Cadastro de carro\n\t2 - Consulta de carro\n\t3 - Preco medio dos carros\n\t4 - Imprime estoque revenda\n\t5 - Fim\n\n\tEntre com sua opcao: ");
    scanf("%d", &option);

    if( option<1 || option>5 )
    {
        while ( option<1 || option>5 )
        {
            printf("\n\nOpcao invalida. Entre com uma opcao valida: ");
            scanf("%d", &option);
        }
    }

    return option;
}

void cadastraCarro(CARRO *c)
{

    printf("\n Voce selecionou cadastro de carro. Preencha as informacoes: \n");

    printf("\n Codigo: ");
    scanf("%d", &(c->cod));


    printf("\n Marca: ");
    scanf("%s", &((*c).marca));


    printf("\n Modelo: ");
    scanf("%s", &((*c).modelo));


    printf("\n Preco: ");
    scanf("%f", &(c->preco));


    printf("\n Ano: ");
    scanf("%d", &(c->ano));

}


void print_carro(CARRO c)
{
    printf("\n Codigo: %d", c.cod);

    printf("\n Marca: %s", c.marca);

    printf("\n Modelo: %s", c.modelo);

    printf("\n Preco: %.2f", c.preco);

    printf("\n Ano: %d\n", c.ano);

}

float calcMediaPreco(CARRO carros[], int ncarros)
{
    int i;
    float somaPrecoCarros = 0;
    float numCarrosRegistrados = 0;
    float media;

    for(i=0; i<ncarros; i++)
    {
        if (carros[i].cod != -1)
        {
            somaPrecoCarros += carros[i].preco;
            numCarrosRegistrados++;
        }
    }

    if (numCarrosRegistrados == 0) //nao h� carros, ent�o a m�dia � 0.
        return 0;

    media = somaPrecoCarros/numCarrosRegistrados;

    return media;
}


CARRO procuraCarro(CARRO carros[], int ncarros, int cod)
{
    int i;

    printf("\nInsira o codigo: ");
    scanf("%d", &cod);

    for(i=0; i<ncarros; i++)
    {
        if (cod == carros[i].cod)
        {
            return carros[i];
        }
    }

    //se n�o tiveram carros com aquele codigo, cod recebe -1. carro 3 � o ultimo espa�o que o usuario n tem acesso,
    //assim, n�o h� altera��o de registros pr�vios
    carros[3].cod = -1;

    return carros[3];
}



int main()
{
    //Declara��es
    int ncarros = 3;
    int slotsDisponiveis = 2;
    int menuOption;
    int *cod, i;
    float mediaCarros;
    CARRO c;
    CARRO carros[ncarros];


    //inicializa todos os carros com -1 como c�digo. Significa que n�o h� carros no slot.
    // Isso � �til para registrar quantos carros ser�o usados na m�dia, e n�o imprime lixo opcao 4 (revenda total)
    for(i=0;i<ncarros;i++)
    {
        carros[i].cod = -1;
    }


    while(menuOption != 5) //programa em loop at� sair.
    {
        // Imprime menu na tela, faz valida��o e retorna a op��o desejada
        menuOption = menu();

        switch(menuOption)
        {
            case 1: // CADASTRO DE CARRO
            // Le informa��es e cadastra um carro

                if( slotsDisponiveis == -1) // se n�o h� mais slots dispon�veis, n�o ser� poss�vel registrar novos carros.
                {
                    printf("\nNao foi possivel registrar novo carro. Numero maximo de carros (3) atingido.");
                    break;
                }
                else //se n�o, chama o registro e armazena o carro no slot.
                {
                    cadastraCarro(&c);
                    carros[slotsDisponiveis] = c;
                    printf("\nCarro registrado no slot %d!", slotsDisponiveis);
                    slotsDisponiveis -= 1; //a cada cadastro, o numero de slots disponiveis diminui em 1
                }
                break;



            case 2: // CONSULTA DE CARRO

                // Procura um carro com o c�digo fornecido entre todos os cadastrados. Caso n�o
                //exista o carro, retorna -1 no campo cod do carro retornado
                c = procuraCarro(carros, ncarros, cod);
                if (c.cod == -1)
                    printf("\nNao existem carros no registro com esse codigo!");
                else
                    print_carro(c);

                break;



            case 3: // PRE�O M�DIO DE TODOS OS CARROS

                // calcula o preco m�dio de todos os carros cadastrados
                mediaCarros = calcMediaPreco(carros, ncarros);
                printf("Preco medio: %.2f", mediaCarros);
                break;



            case 4: // IMPRIME A REVENDA
                for(i=0; i<ncarros; i++)
                {
                    if(carros[i].cod != -1)
                        print_carro(carros[i]);
                }
                break;


            case 5: // ENCERRA PROGRAMA
                return 0;
        }
    }

    return 0;
}
