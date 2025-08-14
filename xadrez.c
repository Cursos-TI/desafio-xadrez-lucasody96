#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i, movimentacaoPeca;
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
    printf("[R]. Rainha\n");

    printf("Qual é a peça que você quer mover? ");
    scanf("%c", &pecaSelecionada);

    //A partir da peça selecionada pelo usuário, será solicitado quantas casas a peça será movida
    switch (pecaSelecionada)
    {
    case 'T':
        // Implementação de Movimentação da Torre
        // Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
        printf("\nVocê pode mover a peça selecionada [Torre] para a direita. É possível mover até 7 posições a direita. Informe um número de 1 a 7 referente a quantidade de casas a direita que deseja mover? ");
        scanf("%d", &movimentacaoPeca);

        if ((movimentacaoPeca < 1) || (movimentacaoPeca > 7)){
            printf("Número de casas para a movimentação da peça incorreta, programa sendo encerrado...\n");
            return 1;
        }else
        {
            i = 1;//posição inicial da peça
            while (i <= movimentacaoPeca)
            {
                printf ("\nTorre foi movida para a direita da posição [%d] para a posição [%d]\n", i, i+1);
                i++;
            }
            

        }
        break;

     case 'B':

        // Implementação de Movimentação do Bispo
        // Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
        printf("\nVocê pode mover a peça selecionada [Bispo] na diagonal (para cima e a direita). É possível mover até 7 posições na diagonal. Informe um número de 1 a 7 referente a quantidade de posições na diagonal que deseja mover? ");
        scanf("%d", &movimentacaoPeca);

        if ((movimentacaoPeca < 1) || (movimentacaoPeca > 7)){
            printf("Número de casas para a movimentação da peça incorreta, programa sendo encerrado...\n");
            return 1;
        }else
        {
            
            i = 1;//posição inicial da peça

            do
            {
                printf ("\nBispo foi movido para a diagonal da posição [%d] para a posição [%d]\n", i, i+1);
                i++;

            } while (i <= movimentacaoPeca);

        }

        break;

     case 'R':
        
        // Implementação de Movimentação da Rainha
        // Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
        printf("\nVocê pode mover a peça selecionada [Rainha] para a esquerda. É possível mover até 7 posições para a esquerda. Informe um número de 1 a 7 referente a quantidade de posições para a esquerda que deseja mover? ");
        scanf("%d", &movimentacaoPeca);

         if ((movimentacaoPeca < 1) || (movimentacaoPeca > 7)){
            printf("Número de casas para a movimentação da peça incorreta, programa sendo encerrado...\n");
            return 1;
        }else
        {

            for (i = 8; i > 8 - movimentacaoPeca; i--)
            {
                printf ("\nRainha foi movido para a esquerda da posição [%d] para a posição [%d]\n", i, i-1);
            }

               
        }

        break;
    
    default:

        printf("Opção selecionada inválida, programa sendo encerrado...\n");
        return 1;

        break;
    }

    
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
