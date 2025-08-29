#include <stdio.h>

void moverTorre(int posicoes){
    if (posicoes > 0)
    {
        printf ("\nDireita");
        moverTorre(posicoes - 1);
    }
    
}

void moverBispo(int posicoes){
    
    for (int i = 0; i < posicoes; i++)
    {

        printf ("Cima - ");

        for (int j = 0; j < posicoes; j++)
        {
            printf("direita\n");
            break;//o segredo para que faça corretamente. O programa entra no loop e ja saí, logo vai escrever 5 vezes o cima e 5 vezes o direita. Se não fosse isso iria escrever 25x direita.
        }
        
    }
    
}


void moverRainha(int posicoes){
    if (posicoes > 0)
    {
        printf ("\nEsquerda");
        moverRainha(posicoes - 1);
    }
    
}



int main() {
    // Nível Novato - Movimentação das Peças
    // Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i, j;
    char pecaSelecionada;

    // Introdução do jogo

    printf("===========================================\n");
    printf(" Bem vindo ao jogo xadrez - MateCheck! \n");
    printf("===========================================\n");
    printf("\n");

    //Seleção da peça que vai ser jogada
    printf("Selecione a peça que irá ser jogada: \n");
    printf("[T]. Torre\n");
    printf("[B]. Bispo\n");
    printf("[C]. Cavalo\n");
    printf("[R]. Rainha\n");

    //A partir da peça selecionada pelo usuário, será solicitado quantas casas a peça será movida

    printf("Qual é a peça que você quer mover? "); // Adicionei essa linha para ficar mais claro
    scanf(" %c", &pecaSelecionada);
    // =========================================================
    switch (pecaSelecionada)
    {
    case 'T':
        // Implementação de Movimentação da Torre
        // Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
        printf("\nVocê selecionou a [Torre], segue a movimentação da Torre: ");
       
        moverTorre(5);
      
        printf("\n");
        break;

     case 'B':

        // Implementação de Movimentação do Bispo
        // Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
       
        moverBispo(5);

        printf("\n");
        break;

     case 'R':
        
        // Implementação de Movimentação da Rainha
        // Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
        printf("\nVocê selecionou a [Rainha]. Segue movimentação da rainha: ");
       
        moverRainha(8);

        printf("\n");
        break;
    
     case 'C':
        
        // Utilize loops aninhados para simular a movimentação do Cavalo em L.
        // loop pode representar a movimentação horizontal e outro vertical.
        printf("\nVocê selecionou o [Cavalo]. Segue movimentação do Cavalo: ");
       
        i = 1;
        while (i--)
        {
             for (j = 0; j < 2; j++)
            {
               printf("\ncima");
            }
            printf("\ndireita");
        }
        

        printf("\n");
        break;   
    default:

        printf("Opção selecionada inválida, programa sendo encerrado...\n");
        return 1;

        break;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
